/**
 * physics.c
 *
 * Written by Gustavo Bacagine <gustavo.bacagine@protonmail.com>
 *  
 * Description: physics file
 *
 * Date: 24/11/2023
 */

#include "physics/physics.h"

double dPhysicsCalcAverageSpeed(double dDistance, double dTime)
{
  if(dTime == 0.0)
  {
    return NAN;
  }

  return dDistance / dTime;
}

double dPhysicsCalcDistance(double dSpeed, double dTime)
{
  if(dSpeed == 0 || dTime == 0)
  {
    return NAN;
  }

  return dSpeed * dTime;
}

double dPhysicsCalcUniformlyAcceleratedMotion(double dInitialVelocity,
                                              double dTime,
                                              double dAcceleration)
{
  return dInitialVelocity * dTime + ((dAcceleration * pow(dTime, 2)) / 2);
}

double dPhysicsCalcFinalVelocity(double dInitialVelocity,
                                 double dAcceleration,
                                 double dTime)
{
  return dInitialVelocity + dAcceleration * dTime;
}

double dPhysicsCalcDisplacement(double dInitialVelocity,
                                double dFinalVelocity,
                                double dTime)
{
  return ((dInitialVelocity + dFinalVelocity) * dTime) / 2;
}

double dPhysicsCalcForce(double dMass, double dAccelaration)
{
  return dMass * dAccelaration;
}

double dPhysicsCalcWeightForce(double dMass, double dGravity)
{
  return dPhysicsCalcForce(dMass, dGravity);
}

double dPhysicsCalcKineticEnergy(double dMass, double dVelocity)
{
  return (dMass * pow(dVelocity, 2)) / 2;
}

double dPhysicsCalcWork(double dForce, double dDistance)
{
  return dForce * dDistance;
}

double dPhysicsCalcGravitationalPotentialEnergy(double dMass,
                                                double dGravity,
                                                double dHeight)
{
  return dMass * dGravity * dHeight;
}

