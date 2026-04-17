#include <iostream>
using namespace std;

// Function prototypes
bool isEven(int n);
bool isPositive(int n);
bool isMultipleOfFive(int n);
void displayAnalysis(int n);

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    // Use the higher-level function
    displayAnalysis(number);

    return 0;
}

// Helper function: check even or odd
bool isEven(int n) {
    return n % 2 == 0;
}

// Helper function: check positive (note: zero handled separately)
bool isPositive(int n) {
    return n > 0;
}

// Helper function: check multiple of 5
bool isMultipleOfFive(int n) {
    return n % 5 == 0;
}

// Function that uses all helpers
void displayAnalysis(int n) {
    cout << "\n--- Number Analysis Report ---\n";
    cout << "Number: " << n << endl;

    // Even or Odd
    if (isEven(n))
        cout << "Even/Odd: Even\n";
    else
        cout << "Even/Odd: Odd\n";

    // Positive / Negative / Zero
    if (n == 0)
        cout << "Sign: Zero\n";
    else if (isPositive(n))
        cout << "Sign: Positive\n";
    else
        cout << "Sign: Negative\n";

    // Multiple of 5
    if (isMultipleOfFive(n))
        cout << "Multiple of 5: Yes\n";
    else
        cout << "Multiple of 5: No\n";
}

/*
This program uses bottom-up design.

Bottom-up design means we first create small, simple helper functions
that perform specific tasks, such as:
- checking if a number is even
- checking if a number is positive
- checking if a number is a multiple of 5

After building and testing these smaller functions, we combine them
into a larger function (displayAnalysis) that uses these helpers
to produce the final result.

Finally, main() only calls the higher-level function.

This approach makes the program:
- modular and reusable
- easier to test (each helper function can be tested independently)
- easier to build step by step from simple parts to a complete system
*/