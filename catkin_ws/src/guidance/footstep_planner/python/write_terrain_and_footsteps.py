from utils import *

terrain_A = Terrain([1, 1, 1, 1])
terrain_C = Terrain()

terrain_A.write_to_sdf('../../../simulator/terrain_description/model', with_height=True)
transcribe_footsteps_to_sdf('/home/melyso/Documents/csv_files/footstep_planner', '../../../simulator/footstep_description/model')