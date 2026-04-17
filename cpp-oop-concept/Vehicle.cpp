#include <iostream>
using namespace std;

class Vehicle {
    public:
        void move() {
            cout << "Vehicle is moving" << endl;
        }
};

class Car : public Vehicle {
    public:
        void move() {
            cout << "Car is driving" << endl;
        }
};

 
class Bicycle : public Vehicle {
    public:
        void move() {
            cout << "Bicycle is pedaling" << endl;
        }
};

int main() {
    Vehicle v;
    Car c;
    Bicycle b;

    v.move();
    c.move();
    b.move();

    return 0;
}