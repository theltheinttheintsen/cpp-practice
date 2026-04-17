#include <iostream>
using namespace std;

int getNumber() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n;
}

int squareNumber(int n) {
    int result = n * n; 
    cout << "local result (square) = " << result << endl;
    return result;
}

void showResult(int original, int squared) {   
    int result = squared - original;          
    cout << " local result (squared - original) = " << result << endl;
    cout << "  Original: " << original
         << " | Squared: " << squared
         << " | Difference: " << result << endl;
}

int main() {
    cout << "=== Local Variable Scope Demo ===" << endl << endl;

    for (int i = 1; i <= 2; i++) {
        cout << "--- Integer #" << i << " ---" << endl;
        int num = getNumber();
        int sq  = squareNumber(num);
        showResult(num, sq);   
        cout << endl;
    }

    return 0;
}