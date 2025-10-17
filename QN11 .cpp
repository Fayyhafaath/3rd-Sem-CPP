#include <iostream>
using namespace std;

class BankAccount {
protected:
    int account_number;
    double balance;

public:
  
    BankAccount(int acc_no, double bal) {
        account_number = acc_no;
        balance = bal;
    }

    
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
        cout << "Updated Balance: " << balance << endl;
    }
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "Remaining Balance: " << balance << endl;
        }
    }


    void display() {
        cout << "\nAccount Number: " << account_number << endl;
        cout << "Current Balance: " << balance << endl;
    }
};


int main() {
    BankAccount account1(1001, 5000.0);

    account1.display();

    cout << "\n--- Performing Transactions ---\n";
    account1.deposit(1500.0);
    account1.withdraw(2000.0);
    account1.withdraw(6000.0);  

    cout << "\nFinal Account Details:";
    account1.display();

    return 0;
}
