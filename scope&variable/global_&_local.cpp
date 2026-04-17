#include <iostream>
using namespace std;

int count = 100;

void displayValues() {
    int count = 25;
    cout << "  Local  count = " << count   << endl;
    cout << "  Global count = " << ::count << endl;
}

void changeGlobal() {
    ::count += 10;
    cout << "  Global count after +10 = " << ::count << endl;
}

int main() {
    cout << " Global vs Local Variable Demo " << endl << endl;

    cout << " Global count before  = " << count << endl << endl;

    displayValues();

    cout << endl << " Global count after  = " << count << endl << endl;

    changeGlobal();

    cout << endl << "Global count after  changeGlobal()  = " << count << endl;

    return 0;
}