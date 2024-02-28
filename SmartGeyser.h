
class SmartGeyser :public WaterHeater,public EnvironmentSensor{
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

