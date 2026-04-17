#include <iostream>
using namespace std;

class Thermostat {
    private:
        float temperature;        
        float minTemp = 60.0;
        float maxTemp = 80.0;

    public:
        Thermostat() {
            temperature = 70.0;   
        }

        void setTemperature(float temp) {
            if (temp >= minTemp && temp <= maxTemp) {
                temperature = temp;    
                cout << "Temperature set to: " << temperature << endl;
            } else {
                cout << "Invalid temperature. Please enter a value between "
                     << minTemp << " and " << maxTemp << "." << endl;
            }
        }

        float getTemperature() {
            return temperature;    // fixed typo
        }
};

int main() {
    Thermostat t;                 

    t.setTemperature(70.0);
    cout << "Current temperature: " << t.getTemperature() << endl;

    t.setTemperature(90.0);
    cout << "Current temperature: " << t.getTemperature() << endl;

    return 0;
}