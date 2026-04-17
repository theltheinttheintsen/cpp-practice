#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }

    cout << "Factorial of " << n << " is " << factorial << endl;
    return 0;
}