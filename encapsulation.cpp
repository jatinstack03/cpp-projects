#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // private data (hidden from outside)

public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    // Public method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    // Public method to check balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000); // initial balance
    account.deposit(500);
    account.withdraw(200);

    cout << "Current Balance: " << account.getBalance() << endl;
    return 0;


}
