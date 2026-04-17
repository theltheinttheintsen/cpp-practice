#include <iostream>
using namespace std;

class BankAccount {
    private:
        int accountNumber;
        double balance;

    public:
        BankAccount(int accNum, double initialBalance) {
            accountNumber = accNum;
            balance = initialBalance;
        }

        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: " << amount << endl;
            } else {
                cout << "Invalid deposit amount." << endl;
            }
        }

        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            } else {
                cout << "Invalid or insufficient funds." << endl;
            }
        }

        double getBalance() {
            return balance;
        }
};

int main() {
    BankAccount account(101, 0.0);

    account.deposit(500);
    account.withdraw(200);
    cout << "Final balance: " << account.getBalance() << endl;

    return 0;
}