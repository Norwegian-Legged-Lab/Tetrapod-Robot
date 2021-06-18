import numpy as np

import matplotlib.pyplot as plt

from IPython.display import HTML, display

from matplotlib.animation import FuncAnimation

from matplotlib.patches import Rectangle

from matplotlib import RcParams, rcParams
rcParams['figure.figsize'] = (10, 5)

class SteppingStone(object):

    def __init__(self, center, width, height, name=None):
        
        # store arguments
        self.center = center
        self.width = width
        self.height = height
        self.name = name
        
        # distance from center to corners
        c2tr = np.array([width, height]) / 2
        c2br = np.array([width, - height]) / 2
        
        # position of the corners
        self.top_right = center + c2tr
        self.bottom_right = center + c2br
        self.top_left = center - c2br
        self.bottom_left = center - c2tr
        
        # halfspace representation of the stepping stone
        self.A = np.array([[1, 0], [0, 1], [-1, 0], [0, -1]])
        self.b = np.concatenate([c2tr] * 2) + self.A.dot(center)
        
    def plot(self, **kwargs):
        return plot_rectangle(self.center, self.width, self.height, **kwargs)
    
# helper function that plots a rectangle with given center, width, and height
def plot_rectangle(center, width, height, ax=None, frame=.1, **kwargs):
        
        # make black the default edgecolor
        if not 'edgecolor' in kwargs:
            kwargs['edgecolor'] = 'black'
            
        # make transparent the default facecolor
        if not 'facecolor' in kwargs:
            kwargs['facecolor'] = 'none'
            
        # get current plot axis if one is not given
        if ax is None:
            ax = plt.gca()
            
        # get corners
        c2c = np.array([width, height]) / 2
        bottom_left = center - c2c
        top_right = center + c2c
        
        # plot rectangle
        rect = Rectangle(bottom_left, width, height, **kwargs)
        ax.add_patch(rect)
        
        # scatter fake corners to update plot limits (bad looking but compact)
        ax.scatter(*bottom_left, s=0)
        ax.scatter(*top_right, s=0)
        
        # make axis scaling equal
        ax.set_aspect('equal')
        
        return rect

class Terrain(object):
    
    # parametric construction of the stepping stones
    # the following code adapts the position of each stepping
    # stone depending on the size and the sparsity of bool_bridge
    def __init__(self, bool_bridge):
        
        # ensure that bool_bridge has only boolean entries
        if any(i != bool(i) for i in bool_bridge):
            raise ValueError('Entry bool_bridge must be a list of boolean value.')
            
        # initialize internal list of stepping stones
        self.stepping_stones = []
        
        # add initial stepping stone to the terrain
        initial = self.add_stone([0, 0], 1, 1, 'initial')
        
        # add bridge stepping stones to the terrain
        # gap between bridge stones equals bridge stone width
        width_bridge = .2
        center = initial.bottom_right + np.array([width_bridge * 1.5, initial.height / 4])
        centers = [center + np.array([i * 2 * width_bridge, 0]) for i in np.where(bool_bridge)[0]]
        self.add_stones(
            centers,
            [width_bridge] * sum(bool_bridge),
            [initial.height / 2] * sum(bool_bridge),
            'bridge'
        )
                
        # add goal stepping stone to the terrain
        # same dimensions of the initial one
        center = initial.center + np.array([initial.width + (len(bool_bridge) * 2 + 1) * width_bridge, 0])
        goal = self.add_stone(center, initial.width, initial.height, 'goal')
        
        # add lateral stepping stone to the terrain
        height = .4
        clearance = .1
        c2g = goal.center - initial.center
        width = initial.width + c2g[0]
        center = initial.center + c2g / 2 + np.array([0, (initial.height + height) / 2 + clearance])
        self.add_stone(center, width, height, 'lateral')
        
    # adds a stone to the internal list stepping_stones
    def add_stone(self, center, width, height, name=None):
        stone = SteppingStone(center, width, height, name=name)
        self.stepping_stones.append(stone)
        return stone
    
    # adds multiple stones to the internal list stepping_stones
    def add_stones(self, centers, widths, heights, name=None):
        
        # ensure that inputs have coherent size
        n_stones = len(centers)
        if n_stones != len(widths) or n_stones != len(heights):
            raise ValueError('Arguments have incoherent size.')
            
        # add one stone per time
        stones = []
        for i in range(n_stones):
            stone_name = name if name is None else name + '_' + str(i)
            stones.append(self.add_stone(centers[i], widths[i], heights[i], name=stone_name))
            
        return stones

    # returns the stone with the given name
    # raise a ValueError if no stone has the given name
    def get_stone_by_name(self, name):

        # loop through the stones
        # select the first with the given name
        for stone in self.stepping_stones:
            if stone.name == name:
                return stone
        
        # raise error if there is no stone with the given name
        raise ValueError(f'No stone in the terrain has name {name}.')
    
    # plots all the stones in the terrain
    def plot(self, title=None, **kwargs):
        
        # make light green the default facecolor
        if not 'facecolor' in kwargs:
            kwargs['facecolor'] = [0, 1, 0, .1]
        
        # plot stepping stones disposition
        labels = ['Stepping stone', None]
        for i, stone in enumerate(self.stepping_stones):
            stone.plot(label=labels[min(i, 1)], **kwargs)
            
        # set title
        plt.title(title)

def animate_footstep_plan(terrain, n_steps, step_span, position_left, position_right, title=None, outname="footstep_planner", save_anim=False):

    # initialize figure for animation
    fig, ax = plt.subplots()

    # plot stepping stones
    terrain.plot(title=title, ax=ax)

    # initial position of the feet
    left_foot = ax.scatter(0, 0, color='r', zorder=3, label='Left foot')
    right_foot = ax.scatter(0, 0, color='b', zorder=3, label='Right foot')

    # initial step limits
    left_limits = plot_rectangle(
        [0 ,0],    # center
        step_span, # width
        step_span, # eight
        ax=ax,
        edgecolor='b',
        label='Left-foot limits'
    )
    right_limits = plot_rectangle(
        [0 ,0],    # center
        step_span, # width
        step_span, # eight
        ax=ax,
        edgecolor='r',
        label='Right-foot limits'
    )

    # misc settings
    #plt.close()
    ax.legend(loc='upper left', bbox_to_anchor=(0, 1.3), ncol=2)

    def animate(n_steps):

        # scatter feet
        left_foot.set_offsets(position_left[n_steps])
        right_foot.set_offsets(position_right[n_steps])

        # limits of reachable set for each foot
        c2c = np.ones(2) * step_span / 2
        right_limits.set_xy(position_left[n_steps] - c2c)
        left_limits.set_xy(position_right[n_steps] - c2c)

    # create ad display animation
    ani = FuncAnimation(fig, animate, frames=n_steps+1, interval=1e3)

    if save_anim:
        ani.save(outname + ".mp4", fps=30, extra_args=['-vcodec', 'libx264'])
    
    plt.show()

def import_decision_variables(base_name="footstep_planner"):
    fend = ".csv"

    position_left = np.genfromtxt(base_name + "_position_left" + fend)
    
    position_right = np.genfromtxt(base_name + "_position_right" + fend)
    
    stone_left = np.genfromtxt(base_name + "_stone_left" + fend)
    
    stone_right = np.genfromtxt(base_name + "_stone_right" + fend)

    return (position_left, position_right, stone_left, stone_right, True)

def import_and_animate_footstep_plan(terrain, n_steps, step_span, title=None, base_name="footstep_planner"):
    
    # import footstep_planner results
    decision_variables = import_decision_variables(base_name)
    
    # animate result
    animate_footstep_plan(terrain, n_steps, step_span, *decision_variables[:2], title, base_name)