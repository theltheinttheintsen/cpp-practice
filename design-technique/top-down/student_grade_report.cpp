#include <iostream>
#include <string>
using namespace std;

string getStudentName();
void getScores(double &s1, double &s2, double &s3);
double computeAverage(double s1, double s2, double s3);
char getLetterGrade(double avg);
void displayReport(string name, double avg, char grade);

int main() {
    string name;
    double score1, score2, score3, average;
    char grade;

    name = getStudentName();
    getScores(score1, score2, score3);
    average = computeAverage(score1, score2, score3);
    grade = getLetterGrade(average);
    displayReport(name, average, grade);

    return 0;
}


string getStudentName() {
    string name;
    cout << "Enter student name: ";
    getline(cin, name);
    return name;
}

void getScores(double &s1, double &s2, double &s3) {
    cout << "Enter score 1: ";
    cin >> s1;
    cout << "Enter score 2: ";
    cin >> s2;
    cout << "Enter score 3: ";
    cin >> s3;
}


double computeAverage(double s1, double s2, double s3) {
    return (s1 + s2 + s3) / 3.0;
}

char getLetterGrade(double avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

void displayReport(string name, double avg, char grade) {
    cout << "Student Grade Report";
    cout << "Name: " << name << endl;
    cout << "Average: " << avg << endl;
    cout << "Grade: " << grade << endl;
}

/*
This program uses top-down refinement.

Top-down design means we start with the overall problem (generate a student grade report)
and break it into smaller, manageable tasks such as:
- getting input
- computing average
- determining grade
- displaying output

Each task is implemented as a separate function.

This approach makes the program:
- easier to understand
- easier to debug
- more organized and modular

Instead of writing everything in main(), we refine the problem step-by-step
into smaller pieces (functions), which is the essence of top-down design.
*/