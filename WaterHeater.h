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
