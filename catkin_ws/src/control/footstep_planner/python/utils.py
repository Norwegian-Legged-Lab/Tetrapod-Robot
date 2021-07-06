import collections
import numpy as np

import matplotlib.pyplot as plt

from IPython.display import HTML, display

from matplotlib.animation import FuncAnimation

from matplotlib.patches import Rectangle

from matplotlib import RcParams, rcParams
rcParams['figure.figsize'] = (10, 5)

from colour import Color

import xml.etree.ElementTree as ET

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
    def add_to_sdf(self, super, indicator=True):
        if indicator:
            size_string = str(self.width) + ' ' + str(self.height) + ' 0.001 0 0 0'
            pose_string = str(self.center[0]) + ' ' + str(self.center[1]) + ' 0 0 0 0'
        else:
            size_string = str(self.width) + ' ' + str(self.height) + ' 0.5 0 0 0'
            pose_string = str(self.center[0]) + ' ' + str(self.center[1]) + ' -0.25 0 0 0'

        model = ET.SubElement(super, 'model')

        model.set('name', self.name)

        static = ET.SubElement(model, 'static')
        static.text = 'true'

        pose = ET.SubElement(model, 'pose')
        pose.text = pose_string

        link = ET.SubElement(model, 'link')
        link.set('name', 'plate_link')
        
        link_pose = ET.SubElement(link, 'pose')
        link_pose.text = '0 0 0 0 0 0'

        visual = ET.SubElement(link, 'visual')
        visual.set('name', 'plate_visual')

        visual_geometry = ET.SubElement(visual, 'geometry')
        visual_box = ET.SubElement(visual_geometry, 'box')

        visual_size = ET.SubElement(visual_box, 'size')
        visual_size.text = size_string
        if indicator:
            material = ET.SubElement(visual, 'material')

            ambient = ET.SubElement(material, 'ambient')
            ambient.text = '0.8 0 0 1'

            diffuse = ET.SubElement(material, 'diffuse')
            diffuse.text = '0.8 0 0 1'

            specular = ET.SubElement(material, 'specular')
            specular.text = '0.1 0.1 0.1 1'

            emissive = ET.SubElement(material, 'emissive')
            emissive.text = '0.8 0 0 1'
        else:
            collision = ET.SubElement(link, 'collision')
            collision.set('name', 'plate_collision')

            collision_geometry = ET.SubElement(collision, 'geometry')
            collision_box = ET.SubElement(collision_geometry, 'box')

            collision_size = ET.SubElement(collision_box, 'size')
            collision_size.text = size_string
        




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
    def __init__(self, bool_bridge=None):

        self.stepping_stones = []
        if bool_bridge is None:
            initial = self.add_stone([0, 0], 1.2, 1.2, 'initial')
            
            goal = self.add_stone([4, 0], 1.2, 1.2, 'goal')

            for i in range(2):
                self.add_stone([1 + 2*i, 0], 1.2, 4.2, 'vertical' + str(i))
                self.add_stone([2, -1.5 + 3*i], 3.2, 1.2, 'lateral' + str(i))
        else:
            # ensure that bool_bridge has only boolean entries
            if any(i != bool(i) for i in bool_bridge):
                raise ValueError('Entry bool_bridge must be a list of boolean value.')
                
            # initialize internal list of stepping stones
            
            # add initial stepping stone to the terrain
            initial = self.add_stone([0, 0], 1.2, 1.2, 'initial')
            
            # add bridge stepping stones to the terrain
            # gap between bridge stones equals bridge stone width
            width_bridge = .24
            center = initial.bottom_right + np.array([width_bridge * 1.5, initial.height / 2])
            centers = [center + np.array([i * 2 * width_bridge, 0]) for i in np.where(bool_bridge)[0]]
            self.add_stones(
                centers,
                [width_bridge*1.5] * sum(bool_bridge),
                [initial.height] * sum(bool_bridge),
                'bridge'
            )
                    
            # add goal stepping stone to the terrain
            # same dimensions of the initial one
            center = initial.center + np.array([initial.width + (len(bool_bridge) * 2 + 1) * width_bridge, 0])
            goal = self.add_stone(center, initial.width, initial.height, 'goal')
            
            # add lateral stepping stone to the terrain
            height = .8
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
    
    def write_to_sdf(self, fname='terrain_xml', with_height=True):
        fend = '.sdf'
        sdf = ET.Element('sdf')
        sdf.set('version', '1.7')
        model = ET.SubElement(sdf, 'model')
        model.set('name', 'terrain')
        
        pose = ET.SubElement(model, 'pose')
        pose.text = '0 0 0 0 0 0'

        
        if with_height:
            model_indicator = ET.SubElement(model, 'model')
            model_indicator.set('name', 'terrain_indicator')

            pose_indicator = ET.SubElement(model, 'pose')
            pose_indicator.text = '0 0 0 0 0 0'

            model_height = ET.SubElement(model, 'model')
            model_height.set('name', 'terrain_height')

            pose_height = ET.SubElement(model, 'pose')
            pose_height.text = '0 0 0 0 0 0'

            for s in self.stepping_stones:
                s.add_to_sdf(model_indicator, indicator=True)
                s.add_to_sdf(model_height, indicator=False)
        else:
            for s in self.stepping_stones:
                s.add_to_sdf(model)
        
        mydata = ET.tostring(sdf, encoding='unicode', xml_declaration=True)
        f = open(fname + fend, 'w')
        f.write(mydata)
        f.close()
    

def animate_footstep_plan(terrain, n_steps, step_span, positions, title=None, outname="footstep_planner", save_anim=False):

    # initialize figure for animation
    fig, ax = plt.subplots()

    # plot stepping stones
    terrain.plot(title=title, ax=ax)

    # initial position of the feet
    colors = ['r', 'b', 'g', 'y']

    feet = [ax.scatter(0, 0, color=c, zorder=3, label='foot ' + str(i)) for (i, c) in enumerate(colors)]

    limits = [plot_rectangle(
        [0, 0],
        step_span,
        step_span,
        ax=ax,
        edgecolor=c,
        label='foot ' + str(i) + ' limits'
    ) for (i, c) in enumerate(colors)]

    # left_foot = ax.scatter(0, 0, color='r', zorder=3, label='Left foot')
    # right_foot = ax.scatter(0, 0, color='b', zorder=3, label='Right foot')

    # initial step limits
    # left_limits = plot_rectangle(
    #     [0 ,0],    # center
    #     step_span, # width
    #     step_span, # eight
    #     ax=ax,
    #     edgecolor='b',
    #     label='Left-foot limits'
    # )
    # right_limits = plot_rectangle(
    #     [0 ,0],    # center
    #     step_span, # width
    #     step_span, # eight
    #     ax=ax,
    #     edgecolor='r',
    #     label='Right-foot limits'
    # )

    # misc settings
    #plt.close()
    ax.legend(loc='upper left', bbox_to_anchor=(0, 1.3), ncol=2)

    def animate(n_steps):

        # scatter feet
        #left_foot.set_offsets(position_left[n_steps])
        #right_foot.set_offsets(position_right[n_steps])
        for i in range(len(feet)):
            feet[i].set_offsets(positions[i][n_steps])
        
        # limits of reachable set for each foot
        c2c = np.ones(2) * step_span / 2
        for i in range(len(limits)):
            limits[i].set_xy(positions[i][n_steps] - c2c)
        #right_limits.set_xy(position_left[n_steps] - c2c)
        #left_limits.set_xy(position_right[n_steps] - c2c)

    # create ad display animation
    ani = FuncAnimation(fig, animate, frames=n_steps, interval=1e3)

    if save_anim:
        ani.save(outname + ".mp4", fps=30, extra_args=['-vcodec', 'libx264'])
    
    plt.show()

def import_decision_variables_biped(base_name="footstep_planner"):
    fend = ".csv"

    position_left = np.genfromtxt(base_name + "_position_left" + fend)
    
    position_right = np.genfromtxt(base_name + "_position_right" + fend)
    
    stone_left = np.genfromtxt(base_name + "_stone_left" + fend)
    
    stone_right = np.genfromtxt(base_name + "_stone_right" + fend)

    return (position_left, position_right, stone_left, stone_right, True)

def import_decision_variables_quadruped(base_name="footstep_planner"):
    fend = ".csv"

    position_front_left = np.genfromtxt(base_name + "_position_front_left" + fend)[:, 0:2]
    
    position_front_right = np.genfromtxt(base_name + "_position_front_right" + fend)[:, 0:2]
    
    position_rear_left = np.genfromtxt(base_name + "_position_rear_left" + fend)[:, 0:2]
    
    position_rear_right = np.genfromtxt(base_name + "_position_rear_right" + fend)[:, 0:2]
    
    return (position_front_left, position_front_right, position_rear_left, position_rear_right, True)

def import_and_animate_footstep_plan(terrain, step_span, title=None, base_name="footstep_planner"):
    
    # import footstep_planner results
    footsteps = import_decision_variables_quadruped(base_name)
    n_steps = footsteps[0].shape[0]
    # animate result
    animate_footstep_plan(terrain, n_steps, step_span, footsteps[:4], title, base_name)

def write_footsteps_to_sdf(steps, name='footsteps_xml'):
    fend = '.sdf'
    sdf = ET.Element('sdf')
    sdf.set('version', '1.7')

    model = ET.SubElement(sdf, 'model')
    model.set('name', 'footsteps')

    static = ET.SubElement(model, 'static')
    static.text = '1'

    pose = ET.SubElement(model, 'pose')
    pose.text = '0 0 0 0 0 0'

    yellow = Color('yellow')
    colors = list(yellow.range_to(Color('green'), len(steps)))

    for i, (color, step) in enumerate(zip(colors, steps)):
        footstep_model = ET.SubElement(model, 'model')
        footstep_model.set('name', 'footstep ' + str(i))

        static = ET.SubElement(footstep_model, 'static')
        static.text = '1'

        rgb = color.get_rgb()
        color_string = str(rgb[0]) + ' ' + str(rgb[1]) + ' ' + str(rgb[2]) + ' 1'
        
        link = ET.SubElement(footstep_model, 'link')
        link.set('name', 'footstep_link')
        
        link_pose = ET.SubElement(link, 'pose')
        link_pose.text = str(step[0]) + ' ' + str(step[1]) + ' 0 0 0 0'

        visual = ET.SubElement(link, 'visual')
        visual.set('name', 'footstep_visual')

        visual_geometry = ET.SubElement(visual, 'geometry')

        visual_cylinder = ET.SubElement(visual_geometry, 'cylinder')
        radius = ET.SubElement(visual_cylinder, 'radius')
        radius.text = '0.02'
        
        length = ET.SubElement(visual_cylinder, 'length')
        length.text = '0.01'

        #visual_cylinder.set('radius', '0.05')
        #visual_cylinder.set('length', '0.01')

        material = ET.SubElement(visual, 'material')
        #material.set('name', 'red')

        ambient = ET.SubElement(material, 'ambient')
        ambient.text = color_string

        diffuse = ET.SubElement(material, 'diffuse')
        diffuse.text = color_string

        specular = ET.SubElement(material, 'specular')
        specular.text = '0.1 0.1 0.1 1'

        emissive = ET.SubElement(material, 'emissive')
        emissive.text = color_string

        #collision = ET.SubElement(link, 'collision')
        #collision.set('name', 'plate_collision')

        #collision_geometry = ET.SubElement(collision, 'geometry')
        #collision_box = ET.SubElement(collision_geometry, 'box')

        #collision_size = ET.SubElement(collision_box, 'size')
        #collision_size.text = "0 0 0 0 0 0"
        data = ET.tostring(sdf, encoding='unicode', xml_declaration=True)
        f = open(name + fend, 'w')
        f.write(data)
        f.close()
        

def transcribe_footsteps_to_sdf(infname = 'footstep_planner', outfname = 'footsteps_xml'):
    infend = '.csv'
    footsteps = np.genfromtxt(infname + '_position_ts' + infend)
    write_footsteps_to_sdf(footsteps, outfname)