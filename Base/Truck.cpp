#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck(double load, double maxLoad, double petrol, double maxPetrol)
    : Vehicle(petrol, maxPetrol), current_load(load), max_load(maxLoad) {}

double Truck::getCurrentLoad() const 
{
    return current_load;
}

double Truck::getMaxLoad() const 
{
    return max_load;
}

void Truck::arrive() 
{
    Base::addVehicle();
    Base::addPeople(1);
    Base::addGoods(current_load);
    current_load = 0;
}

bool Truck::leave() 
{
    if (Vehicle::leave()) 
    {
        double goods_to_take = min(Base::goods_on_base, max_load);
        Base::removeGoods(goods_to_take);
        current_load = goods_to_take;
        return true;
    }
    return false;
}

