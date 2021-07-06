# Todo

## Next steps (simpler ones)

- [x]Check out more sophisticated bb-solvers supported by drake ([Gurobi](https://www.gurobi.com/)/[Mosek](https://www.mosek.com/), free for academic use)
- read survey paper for more efficient transcription techniques [here](https://dspace.mit.edu/bitstream/handle/1721.1/96480/Vielma-2015-Mixed%20Integer%20Lineawr.pdf?sequence=1&isAllowed=y)
- Virtualize stepping stone class and add support for (and implement half-plane representations for) general convex polytope stepping stones
- Add support for non-convex polytopes by automatically splitting them up into and representing them as union of multiple convex polytopes?
- Figure out which adaptations must be done to deal with 3D environment (still with level plane stepping stones)
- Figure out which adaptations must be done to deal with slightly more general 3D environments

## Figure out which adaptations must be done to make the planner applicable to tetrapod

- Attempt implementation of [Algorithm described here](https://arxiv.org/pdf/1612.02109.pdf)

- [x] What will replace the simpler box-around-previous-foot constraint from the biped case?
- Must we assume/require that at least 3 feet have contact at all times?
- How to get nice convex regions around the shoulder joints that are still not prohibitively conservative estimates of the reachable set for each foot? intersection of linear and convex nonlinear constraints?

## Interfacing with a trajectory planner/controller

# tomorrow

## Interfacing with Gazebo for visualization
- figure out how to ideally send footstep model directly to gazebo, or if not possible then
- figure out how to update footstep marker positions on-the-fly from rosnode (gazebo plugin)

## Expand planner
- add possibility for stepping stones of different height
- possible to generalize stepping stone class slightly?
- add reward for using fewer steps