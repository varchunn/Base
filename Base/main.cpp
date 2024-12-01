#include <iostream>
#include "Base.h"
#include "Vehicle.h"
#include "Bus.h"
#include "Truck.h"

using namespace std;

int main()
{
    cout << "Initial Base State:" << endl;
    cout << "People on base: " << Base::people_on_base << endl;
    cout << "Vehicles on base: " << Base::vehicles_on_base << endl;
    cout << "Petrol on base: " << Base::petrol_on_base << " liters" << endl;
    cout << "Goods on base: " << Base::goods_on_base << " tons" << endl;
    cout << "--------------------------------" << endl;
   
    Bus bus(20, 30, 50.0, 100.0);
    bus.arrive();
    cout << "Bus arrived with 20 people." << endl;

    Truck truck(10.0, 15.0, 30.0, 100.0);
    truck.arrive();
    cout << "Truck arrived with 10 tons of goods." << endl;

    cout << "After arrivals:" << endl;
    cout << "People on base: " << Base::people_on_base << endl;
    cout << "Vehicles on base: " << Base::vehicles_on_base << endl;
    cout << "Petrol on base: " << Base::petrol_on_base << " liters" << endl;
    cout << "Goods on base: " << Base::goods_on_base << " tons" << endl;
    cout << "--------------------------------" << endl;

    if (bus.leave()) 
    {
        cout << "Bus left the base with passengers." << endl;
    } else {
        cout << "Bus couldn't leave the base." << endl;
    }

    if (truck.leave()) 
    {
        cout << "Truck left the base with goods." << endl;
    } 
    else
    {
        cout << "Truck couldn't leave the base." << endl;
    }

    cout << "After departures:" << endl;
    cout << "People on base: " << Base::people_on_base << endl;
    cout << "Vehicles on base: " << Base::vehicles_on_base << endl;
    cout << "Petrol on base: " << Base::petrol_on_base << " liters" << endl;
    cout << "Goods on base: " << Base::goods_on_base << " tons" << endl;

    return 0;
}
