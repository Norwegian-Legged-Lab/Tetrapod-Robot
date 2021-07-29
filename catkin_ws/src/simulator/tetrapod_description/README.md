# Tetrapod Description

This README serves as an overview of the contents of the tetrapod description.

## Joints

| Name                           | Type              |    
| ------------------------------ | ----------------- |
| `front_left_hip_yaw`           | Revolute          |
| `front_left_hip_pitch`         | Revolute          |
| `front_left_knee_joint`        | Revolute          |
| `front_left_foot_joint`        | Fixed             |
| `front_right_hip_yaw`          | Revolute          |
| `front_right_hip_pitch`        | Revolute          |
| `front_right_knee_joint`       | Revolute          |
| `front_right_foot_joint`       | Fixed             |
| `rear_left_hip_yaw`            | Revolute          |
| `rear_left_hip_pitch`          | Revolute          |
| `rear_left_knee_joint`         | Revolute          |
| `rear_left_foot_joint`         | Fixed             |
| `rear_right_hip_yaw`           | Revolute          |
| `rear_right_hip_pitch`         | Revolute          |
| `rear_right_knee_joint`        | Revolute          |
| `rear_right_foot_joint`        | Fixed             |

NB! In the SDF model you should not use "too smal" inertial values.
This will upset the physics simulator and cause havoc in the simulator.
Because there is a lot of jitter in gazebo, the d gains should generally be set low, because this prevents static movement.
