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
    void setSeason(string& newSeason)
    {
        season = newSeason;
    }
    void setTemperature(int newTemperature) { temperature = newTemperature; }
};


class WaterHeater {
private:
    int temperature;

public:
    WaterHeater(int temperature1)
     {
         temperature = temperature1;
      }


    int getTemperature()
     {
         return temperature;
    }
    void setTemperature(int newTemperature)
    {
        temperature = newTemperature;
    }
};


class SmartGeyser : public WaterHeater, public EnvironmentSensor {
public:
    // Constructor
    SmartGeyser(string season, int temperature, int heaterTemperature): WaterHeater(heaterTemperature), EnvironmentSensor(season, temperature) {}

    // Additional methods specific to SmartGeyser can be added here
};

int main() {
    // Example usage
    SmartGeyser geyser("Winter", 10.5, 60);
    std::cout << "Current season: " << geyser.getSeason() << endl;
    std::cout << "Current temperature: " << geyser.getTemperature() << " C" <<endl;
    std::cout << "Heater temperature: " << geyser.WaterHeater::getTemperature() << " C" <<endl;
    return 0;
}
