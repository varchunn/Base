#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle 
{
    double current_load;
    double max_load;

public:
    Truck(double load, double maxLoad, double petrol, double maxPetrol);

    double getCurrentLoad() const;
    double getMaxLoad() const;
    void arrive();
    bool leave();
};

#endif
