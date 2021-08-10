from utils import *
import sys
                                                                                    
if len(sys.argv) > 1:
    if len(sys.argv) != 5:
        print("Error in input argument. Usage: write_terrain [ bool bool bool bool ](optional). Bools represented as integers.")
        exit()
    
    try:
        bool_bridge = [bool(int(el)) for el in sys.argv[1:5]]
        terrain = Terrain(bool_bridge)
        terrain.write_to_sdf('../../../simulator/terrain_description/model', with_height=True)
    except:
        print("Error in input argument. Usage: write_terrain [ bool bool bool bool ](optional). Bools represented as integers.")
else:
    terrain = Terrain()
    terrain.write_to_sdf('../../../simulator/terrain_description/model', with_height=True)