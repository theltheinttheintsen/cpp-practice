#include <iostream>
using namespace std;

void visitCounter() {
    static int visits = 0; 
    visits++;
    cout << "Call " << visits << " — visits so far: " << visits << endl;
}

void regularCounter() {
    int visits = 0;          
    visits++;
    cout << "Call " << visits << " — visits so far: " << visits << endl;
}

int main() {
    cout << "Static vs Non-Static Local Variable" << endl << endl;

    cout << "Calling visitCounter() 5 times " << endl;
    visitCounter();
    visitCounter();
    visitCounter();
    visitCounter();
    visitCounter();

    cout << endl;

    cout << "Calling regularCounter() 3 times" << endl;
    regularCounter();
    regularCounter();
    regularCounter();

    return 0;
}