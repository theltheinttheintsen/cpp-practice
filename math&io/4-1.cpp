#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string name;
    string city;
    int age;

    cout << "Enter your full name: ";

    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter your city: ";

    getline(cin, city);
    
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    
    return 0;

}