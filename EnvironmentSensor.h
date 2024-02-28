using namespace std;
class EnvironmentSensor {
public:
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
