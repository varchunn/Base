#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle 
{
    int people_count;
    int max_people;

public:
    Bus(int people, int maxPeople, double petrol, double maxPetrol);

    int getPeopleCount() const;
    int getMaxPeople() const;
    void arrive();
    bool leave();
};

#endif
