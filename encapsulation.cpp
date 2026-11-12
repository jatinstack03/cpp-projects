#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    // Private data members: hidden from direct external access
    string accountHolder;
    double balance;

public:
    // Constructor to initialize the object safely
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Initial balance cannot be negative. Set to 0." << endl;
        }
    }

    // Public Setter / Modifier with validation
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Public Setter / Modifier with validation
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    // Public Getter: allows read-only access to private data
    double getBalance() const {
        return balance;
    }

    string getAccountHolder() const {
        return accountHolder;
    }
};

int main() {
    // Create an object of BankAccount
    BankAccount myAccount("Alex", 500.0);

    // Direct access like 'myAccount.balance = -1000;' will cause a compiler error.
    // Instead, we interact through public methods:
    cout << "Account Holder: " << myAccount.getAccountHolder() << endl;
    cout << "Starting Balance: $" << myAccount.getBalance() << endl;

    myAccount.deposit(250.0);
    myAccount.withdraw(100.0);
    myAccount.withdraw(1000.0); // Rejected by validation logic

    cout << "Final Balance: $" << myAccount.getBalance() << endl;

    return 0;
}
