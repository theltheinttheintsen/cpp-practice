#include <iostream>
#include <string>
using namespace std;

class Appliance {
public:
    virtual void turnOn() = 0;
    virtual ~Appliance() {}
};

class Fan : public Appliance {
public:
    void turnOn() override {
        cout << "Fan is turned on." << endl;
    }
};

class Light : public Appliance {
public:
    void turnOn() override {
        cout << "Light is turned on." << endl;
    }
};

int main() {
    cout << "Appliance Control Center" << endl;

    Fan fan;
    Light light;

    fan.turnOn();
    light.turnOn();

    return 0;
}