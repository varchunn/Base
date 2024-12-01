#include "Base.h"
#include <iostream>

int Base::people_on_base = 0;
int Base::vehicles_on_base = 0;
double Base::petrol_on_base = 1000.0;
double Base::goods_on_base = 50.0;

void Base::addPeople(int count) 
{
    people_on_base += count;
}

void Base::removePeople(int count) 
{
    if (people_on_base >= count) 
    {
        people_on_base -= count;
    }
}

void Base::addVehicle() 
{
    vehicles_on_base++;
}

void Base::removeVehicle() 
{
    if (vehicles_on_base > 0) 
    {
        vehicles_on_base--;
    }
}

void Base::addPetrol(double amount) 
{
    petrol_on_base += amount;
}

void Base::removePetrol(double amount) 
{
    if (petrol_on_base >= amount) 
    {
        petrol_on_base -= amount;
    }
}

void Base::addGoods(double amount)
{
    goods_on_base += amount;
}

void Base::removeGoods(double amount) 
{
    if (goods_on_base >= amount)
    {
        goods_on_base -= amount;
    }
}
