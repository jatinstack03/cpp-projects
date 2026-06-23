#include <iostream>  //lets us use input/output (cin, cout).
using namespace std;  //saves us from writing std::cout every time.


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
        cout << "4. Exit\n";//cin >> choice; → user enters a number (1–4).


        switch(choice) {    // decides what to do based on user input.

            case 1: //  calls showBalance.
                showBalance(balance);
                break;
            case 2:  // adds deposit amount to balance.

                balance += deposit();
                break;
            case 3: //  subtracts withdrawal amount (if valid).

                balance -= withdraw(balance);
                break;
            case 4: //  → exits program.
                cout << "THANKS FOR VISITING!\n";
                break;
            default: //handles wrong input.
                cout << "Invalid choice!\n";
        }
    } while(choice != 4);  //keeps looping until user chooses Exit.


    return 0;
}

void showBalance(double balance) {
    cout << "Your balance is: ₹" << balance << endl;
}  // Prints the current balance.

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
// } Asks user for deposit amount.

// If valid (>0), returns it.

// If invalid, returns 0.

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
} // Asks user for withdrawal amount.

// Checks:

// More than balance → not allowed.

// Negative → not allowed.

// Otherwise → returns amount.
