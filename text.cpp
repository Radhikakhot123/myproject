#include<string.h>
#include<iostream>

using namespace std;


class EnvironmentSensor {
private:
    string season;
    double temperature;

public:
    EnvironmentSensor(string season, int temperature) : season(season), temperature(temperature) {}

    string getSeason()
     {
         return season;
     }
    void setSeason(string& season1)
    {
        season = season1;
    }
    void setTemperature(int newTemp) { temperature = newTemp; }
};


class WaterHeater {
private:
    int temperature;

public:
    WaterHeater(int t1)
     {
         temperature = t1;
      }


    int getTemperature()
     {
         return temperature;
    }
    void setTemperature(int t2)
    {

        temperature = t2;
    }
    void adjust( EnvironmentSensor& sensor) {
        if (sensor.getSeason() == "Summer" )
        {
            temperature = 60;
            cout<<"The Heater temperature is"<<temperature<<endl;
        } else if(sensor.getSeason() == "Winter")
        {
            temperature = 100;
            cout<<"The Heater temperature is"<<temperature<<endl;
        }
        else
        {
             temperature=30;
             cout<<"The Heater temperature is"<<temperature<<endl;
        }
    }

};


class SmartGeyser : public WaterHeater, public EnvironmentSensor {
public:
     int status;
    SmartGeyser(string season, int temperature, int heaterTemperature):
         WaterHeater(heaterTemperature), EnvironmentSensor(season, temperature) {}
        void turnOn()
     {
        status = 1;
        cout << "Geyser is turned on." <<endl;
      }

    // Turn off the geyser
    void turnOff() {
        status = 0;
        cout << "Geyser is turned off." <<endl;
    }

    void Print() {
        adjust(*this);
        if (status == 1)
            turnOn();
        else
            turnOff();
    }


};

int main()
{

    SmartGeyser geyser("Summer", 10.5, 60);
    cout << "Current season: " << geyser.getSeason() << endl;
    cout << "Current temperature: " << geyser.getTemperature() << " C" <<endl;

   EnvironmentSensor sensor("Winter", 10.5);
    geyser.Print();

    return 0;
}
