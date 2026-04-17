#include <iostream>
using namespace std;

int main() 

{
    double a, b, c;
    cout << "Enter three numbers : ";
    cin >> a >> b >> c;
    
    double largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    
    double smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;

    return 0;

}