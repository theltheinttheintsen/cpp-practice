#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 50 + 1;
    int guess = 0;

    while (guess != number) {
        cout << "Guess a number between 1 and 50: ";
        cin >> guess;

        if (guess < number)
            cout << "Too low!\n";
        else if (guess > number)
            cout << "Too high!\n";
        else
            cout << "Correct! You guessed it!\n";
    }

    return 0;
}