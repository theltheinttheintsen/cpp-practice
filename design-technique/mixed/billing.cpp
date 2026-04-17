#include <iostream>
using namespace std;

// Function prototypes
double getMealCost();
double getTaxRate();
double getTipPercent();

double computeTax(double mealCost, double taxRate);
double computeTip(double mealCost, double tipPercent);
double computeTotal(double mealCost, double tax, double tip);

void displayBill(double mealCost, double tax, double tip, double total);

int main() {
    double mealCost, taxRate, tipPercent;
    double tax, tip, total;

    // Top-level flow (Top-Down style)
    mealCost = getMealCost();
    taxRate = getTaxRate();
    tipPercent = getTipPercent();

    tax = computeTax(mealCost, taxRate);
    tip = computeTip(mealCost, tipPercent);
    total = computeTotal(mealCost, tax, tip);

    displayBill(mealCost, tax, tip, total);

    return 0;
}

// Input functions
double getMealCost() {
    double cost;
    cout << "Enter meal cost: ";
    cin >> cost;
    return cost;
}

double getTaxRate() {
    double rate;
    cout << "Enter tax rate (e.g., 0.08 for 8%): ";
    cin >> rate;
    return rate;
}

double getTipPercent() {
    double percent;
    cout << "Enter tip percentage (e.g., 0.15 for 15%): ";
    cin >> percent;
    return percent;
}

// Computation functions (Bottom-Up style helpers)
double computeTax(double mealCost, double taxRate) {
    return mealCost * taxRate;
}

double computeTip(double mealCost, double tipPercent) {
    return mealCost * tipPercent;
}

double computeTotal(double mealCost, double tax, double tip) {
    return mealCost + tax + tip;
}

// Output function
void displayBill(double mealCost, double tax, double tip, double total) {
    cout << "\n--- Restaurant Bill ---\n";
    cout << "Meal Cost: $" << mealCost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total: $" << total << endl;
}

/*
Top-Down vs Bottom-Up Design in this program:

Top-Down:
- The main() function shows the overall structure of the program.
- It breaks the problem into major steps:
  input → compute → display
- Each step is handled by separate functions, making the logic easy to follow.

Bottom-Up:
- The smaller helper functions (computeTax, computeTip, computeTotal)
  are built first to perform simple calculations.
- These functions are then combined in main() to solve the full problem.

Summary:
- Top-down organizes the program from big picture to smaller tasks.
- Bottom-up builds small pieces first and then combines them into a complete system.
*/