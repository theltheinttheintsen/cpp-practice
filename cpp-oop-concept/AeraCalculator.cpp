#include <iostream>
using namespace std;
 
const double PI = 3.14159265358979;
 
class AreaCalculator {
public:
    double area(double side) {
        return side * side;
    }
 
    double area(double length, double width) {
        return length * width;
    }
 
    double area(double radius, bool isCircle) {
        if (isCircle) {
            return PI * radius * radius;
        }
        return radius * radius; 
    }
};
 
int main() {
    AreaCalculator calc;
 
    double squareSide    = 5.0;
    double rectLength    = 8.0;
    double rectWidth     = 4.0;
    double circleRadius  = 6.0;
 
    cout << "Area Calculator" << endl;
 
    cout << "Square (side = " << squareSide << "):                  "
         << calc.area(squareSide) << endl;
 
    cout << "Rectangle (" << rectLength << " x " << rectWidth << "):            "
         << calc.area(rectLength, rectWidth) << endl;
 
    cout << "Circle (radius = " << circleRadius << "):              "
         << calc.area(circleRadius, true) << endl;
 

 
    return 0;
}