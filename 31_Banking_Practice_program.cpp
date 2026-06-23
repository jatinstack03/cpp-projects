#include <iostream>  // lets us use input/output (cin, cout).
using namespace std; // saves us from writing std::cout every time.

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 222.0;
    int choice = 0;

    do {
        cout << "\n******************\n";
        cout << "Enter your choice\n";
        cout << "******************\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cin >> choice; // 

        switch(choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                cout << "THANKS FOR VISITING!\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while(choice != 4);

    return 0;
}

void showBalance(double balance) {
    cout << "Your balance is: ₹" << balance << endl;
}

double deposit() {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    if(amount > 0) {
        return amount;
    } else {
        cout << "Invalid deposit amount!\n";
        return 0;
    }
} 

double withdraw(double balance) {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if(amount > balance) {
        cout << "Insufficient funds!\n";
        return 0;
    } else if(amount < 0) {
        cout << "Invalid withdrawal amount!\n";
        return 0;
    } else {
        return amount;
    }
}
