/**
 * physics.h
 *
 * Written by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 *  
 * My physics header file
 *
 * Date: 24/11/2023
 */

#ifndef _PHYSICS_H_
#define _PHYSICS_H_

/******************************************************************************
 *                                                                            *
 *                                 Includes                                   *
 *                                                                            *
 ******************************************************************************/
#include <math.h>
#include <limits.h>

/******************************************************************************
 *                                                                            *
 *                             Defines and macros                             *
 *                                                                            *
 ******************************************************************************/

#define P_ELEMENTARY_CHARGE            1.602176634e-19
#define P_GRAVITATIONAL_CONSTANT       6.67430e-11
#define P_PLANK_CONSTANT               6.62607015e-34
#define P_SPEED_OF_LIGHT_VACCUM        3.0e8
#define P_ELETROSTATIC_CONSTANT        8.9875e9 
#define P_FINE_STRUCTURE_CONSTANT      0.007297
#define P_JOSEPHSON_CONSTANT      483597.8484e10
#define P_RYDBERG_CONSTANT             1.097e7
#define P_BOLTZMANN_CONSTANT           1.380649e-23
#define P_AVOGADROS_NUMBER             6.02214076e23
#define P_IDEAL_GAS_CONSTANT           8.314462618
#define P_ELECTRON_MASS                9.10938356e-31
#define P_PROTON_MASS                  1.6726219e-27
#define P_NEUTRON_MASS                 1.6749275e-27
#define P_VON_KLITZING_CONSTANT        (PLANK_CONSTANT / pow(ELEMENTARY_CHARGE, 2))
#define P_VACUUM_ELETRIC_PERMITTIVITY  (1.0 / (4.0 * M_PI * ELETROSTATIC_CONSTANT))
#define P_VACUUM_MAGNETIC_PERMEABILITY (4.0 * M_PI * 1.0e-7)

/**
 * Solar system planets gravity acelaration
 */
#define P_EARTH_GRAVITY    9.81
#define P_MERCURY_GRAVITY  3.70
#define P_VENUS_GRAVITY    8.87
#define P_MARS_GRAVITY     3.71
#define P_JUPITER_GRAVITY 24.79
#define P_SATURN_GRAVITY  10.44
#define P_URANUS_GRAVITY   8.69
#define P_NEPTUNE_GRAVITY 11.15
#define P_PLUTO_GRAVITY    0.62

/******************************************************************************
 *                                                                            *
 *                  Typedefs, structures, unions and enums                    *
 *                                                                            *
 ******************************************************************************/

/******************************************************************************
 *                                                                            *
 *                     Global variables and constants                         *
 *                                                                            *
 ******************************************************************************/


/******************************************************************************
 *                                                                            *
 *                            Prototype functions                             *
 *                                                                            *
 ******************************************************************************/

/************
 * Mechanic *
 ************/

/**
 * Kinematics
 */

/**
 * dDistance: in kilometers
 * dTime....: in hour
 */
double dPhysicsCalcAverageSpeed(double dDistance, double dTime);

/**
 * dSpeed: in km/h
 * dTime.: in hour
 */
double dPhysicsCalcDistance(double dSpeed, double dTime);

double dPhysicsCalcUniformlyAcceleratedMotion(double dInitialVelocity,
                                              double dTime,
                                              double dAcceleration);

double dPhysicsCalcFinalVelocity(double dInitialVelocity,
                                 double dAcceleration,
                                 double dTime);

double dPhysicsCalcDisplacement(double dInitialVelocity,
                                double dFinalVelocity,
                                double dTime);

/**
 * Dynamics
 */

double dPhysicsCalcForce(double dMass, double dAccelaration);

double dPhysicsCalcWeightForce(double dMass, double dGravity);

/**
 * Energy
 */

/**
 *
 */
double dPhysicsCalcKineticEnergy(double dMass, double dVelocity);

/**
 *
 */
double dPhysicsCalcWork(double dForce, double dDistance);

/**
 *
 */
double dPhysicsCalcGravitationalPotentialEnergy(double dMass,
                                                double dGravity,
                                                double dHeight);

/**
 * Universal gravity
 */


/**
 * Termodynamics
 */


#endif /* _PHYSICS_H_ */

