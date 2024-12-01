#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(double petrol, double volume)
    : petrol_amount(petrol), tank_volume(volume) {}

double Vehicle::getTankVolume() const 
{
    return tank_volume;
}

double Vehicle::getPetrolAmount() const 
{
    return petrol_amount;
}

void Vehicle::arrive() 
{
    Base::addVehicle();
    Base::addPeople(1);
}

bool Vehicle::leave() 
{
    if (Base::people_on_base < 1 || Base::petrol_on_base < (tank_volume - petrol_amount)) {
        return false;
    }
    Base::removePeople(1);
    Base::removePetrol(tank_volume - petrol_amount);
    petrol_amount = tank_volume;  
    Base::removeVehicle();
    return true;
}

