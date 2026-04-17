#include <iostream>
#include <cmath>
using namespace std;


int main() 
{
    float num;
    cout << "Enter a decimal number: ";
    cin >> num;

    cout << "Floor: " << floor(num) << endl;
    cout << "Ceil: " << ceil(num) << endl;
    
    return 0;

}