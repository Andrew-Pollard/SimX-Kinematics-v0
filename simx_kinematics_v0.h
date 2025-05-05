#ifndef SIMX_KINEMATICS_v0_H
#define SIMX_KINEMATICS_v0_H


#include "simx.h"


#define SIMX_KINEMATICS_V0_IDENTIFIER "kinematics_v0"


SIMX_API int simx_kinematics_v0_get_position(const struct SIMXentity* entity, struct SIMXvector3* position);
SIMX_API int simx_kinematics_v0_get_velocity(const struct SIMXentity* entity, struct SIMXvector3* velocity);
SIMX_API int simx_kinematics_v0_get_acceleration(const struct SIMXentity* entity, struct SIMXvector3* acceleration);

SIMX_API int simx_kinematics_v0_get_orientation(const struct SIMXentity** entity, struct SIMXquaternion* orientation);
SIMX_API int simx_kinematics_v0_get_angular_velocity(const struct SIMXentity* entity, struct SIMXvector3* angular_velocity);


#endif /* SIMX_KINEMATIC_V0_H */
