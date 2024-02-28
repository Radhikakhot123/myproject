#include<string.h>
#include<iostream>
#include "EnvironmentSensor.h"
#include "SmartGeyser.h"
#include  "WaterHeater.h"




using namespace std;

int main()
{

    SmartGeyser geyser("Summer", 10.5, 60);
    cout << "Current season: " << geyser.getSeason() << endl;
    cout << "Current temperature: " << geyser.getTemperature() << " C" <<endl;

   EnvironmentSensor sensor("Winter", 10.5);
    geyser.Print();

    HomeOwner owner("John Doe");
    cout << "Homeowner: " << owner.getName() <<endl;

    return 0;
}
