#include <iostream>
#include <cmath>
using namespace std;

int main() 

{
    double num;

    cout << "Enter a decimal number: ";
    cin >> num;

    int rounded = round(num);

    cout << "Rounded:  " << rounded << endl;

    return 0;
}

