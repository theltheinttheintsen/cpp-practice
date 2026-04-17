#include <iostream>
#include <string>
using namespace std;

class StudentAccount {
private:
    string studentName;
    string studentID;
    double gpa;

public:
    void setStudentName(string name) {
        studentName = name;
    }

    void setStudentID(string id) {
        studentID = id;
    }

    void setGPA(double g) {
        gpa = g;
    }

    void displayStudentInfo() {
        cout << " Student Account Information " << endl;
        cout << "Name:       " << studentName << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "GPA:        " << gpa << endl;
    }
};

int main() {
    StudentAccount student;

    student.setStudentName("Max");
    student.setStudentID("S12345");
    student.setGPA(3.90);

    student.displayStudentInfo();

    return 0;
}