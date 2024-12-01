#include "Bus.h"
#include <iostream>
using namespace std;

Bus::Bus(int people, int maxPeople, double petrol, double maxPetrol)
    : Vehicle(petrol, maxPetrol), people_count(people), max_people(maxPeople) {}

int Bus::getPeopleCount() const 
{
    return people_count;
}

int Bus::getMaxPeople() const 
{
    return max_people;
}

void Bus::arrive() 
{
    Base::addVehicle();
    Base::addPeople(people_count + 1);
    people_count = 0;
}

bool Bus::leave() 
{
    if (Vehicle::leave()) 
    {
        int people_to_take = min(Base::people_on_base, max_people);
        Base::removePeople(people_to_take);
        people_count = people_to_take;
        return true;
    }
    return false;
}
