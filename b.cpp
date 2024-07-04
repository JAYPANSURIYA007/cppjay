#include <iostream>
using namespace std;

class ATM {
private:
    float balance;

public:
    ATM() {
        balance = 0.0;
    }


    float check_balance() {
        return balance;
    }

    
    void deposit(float amount) {
        balance += amount;
        cout << "Deposited " << amount << ". Current balance is " << balance << "." << endl;
    }


    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= amount;
            cout << "Withdrew " << amount << ". Current balance is " << balance << "." << endl;
        }
    }
};

int main() {
    ATM atm;  

    int choice;
    float amount;

    while (true) {
        
        cout << "\n*** ATM Menu ***" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;

        
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance is " << atm.check_balance() << "." << endl;
                break;
            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                atm.deposit(amount);
                break;
            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                atm.withdraw(amount);
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                return 0;  
            default:
                cout << "Invalid choice. Please enter a number from 1 to 4." << endl;
        }
    }

    return 0;
}
