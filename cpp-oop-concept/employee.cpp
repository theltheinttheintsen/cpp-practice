#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    double salary;

public:
    void setName(string n) {
        name = n;
    }

    void setSalary(double s) {
        salary = s;
    }

    void displayEmployee() {
        cout << "Employee Name:   " << name << endl;
        cout << "Salary:          $" << salary << endl;
    }
};

// Derived class
class Manager : public Employee {
private:
    string department;

public:
    void setDepartment(string dept) {
        department = dept;
    }

    void displayManager() {
        cout << " Manager Information " << endl;
        displayEmployee();  
        cout << "Department:      " << department << endl;
    
    }
};

int main() {
    Manager mgr;

    mgr.setName("Thel");
    mgr.setSalary(85000.00);
    mgr.setDepartment("Engineering");

    mgr.displayManager();

    return 0;
}