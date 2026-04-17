#include <iostream>
using namespace std;

class Employee {
    protected:
        string name;
        double salary;

    public:
        Employee(string n, double s) {
            name = n;
            salary = s;
        }

        void displayInfo() {
            cout << "Name: "   << name   << endl;
            cout << "Salary: " << salary << endl;
        }
};                                      

class Engineer : public Employee {     
    private:
        string speciality;

    public:
        Engineer(string n, double s, string sp) : Employee(n, s) {
            speciality = sp;
        }

        void displayInfo() {
            Employee::displayInfo();   
            cout << "Speciality: " << speciality << endl;
        }

        void code() {                  
            cout << "Engineer is coding" << endl;
        }
};                                    
int main() {                         
    Engineer eng("Mark", 85000, "Software");
    eng.displayInfo();
    eng.code();

    return 0;
}                                     