#ifndef VEHICLE_H
#define VEHICLE_H

#include "Base.h"

class Vehicle 
{
protected:
    double petrol_amount;
    double tank_volume;

public:
    Vehicle(double petrol, double volume);

    double getTankVolume() const;
    double getPetrolAmount() const;
    virtual void arrive();
    virtual bool leave();
};

#endif

