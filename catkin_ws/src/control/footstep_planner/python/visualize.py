from utils import *

# complete bridge
terrain_A = Terrain([1, 1, 1, 1])
#terrain_A.plot('Terrain A')
#plt.show()

# one stepping stone missing in the bridge
terrain_B = Terrain([1, 1, 1, 0])
#terrain_B.plot('Terrain B')
#plt.show()
terrain_C = Terrain()

step_span = 1
terrain_A.write_to_sdf('../../../simulator/terrain_description/model')
import_and_animate_footstep_plan(terrain_A, step_span, title=None, base_name="/home/melyso/Documents/csv_files/footstep_planner")