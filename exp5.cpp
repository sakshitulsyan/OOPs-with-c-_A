//Design a class to represent a bank account with proper data hiding and member functions for deposit ,
//  withdrawal , showbalance operations.
#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;
    
public:
    // Constructor to initialize the balance to 0 when the object is created
    BankAccount() {
        balance = 0;
    }

    void BalanceEnquiry() {
        cout << "Remaining Balance : " << balance << "\n";
    }
    
    void Withdraw() {
        int amount = 0;
        cout << "Enter the amount to withdraw : ";
        cin >> amount;
        
        // Added a check to prevent overdrawing
        if (amount > balance) {
            cout << "Insufficient Funds!\n";
        } else {
            balance -= amount; // Subtract amount from balance
            cout << "Withdrawal Successful.\n";
        }
        BalanceEnquiry();
    }
    
    void Deposit() {
        int amount = 0;
        cout << "Enter the amount to deposit : ";
        cin >> amount;
        
        balance += amount; // Add amount to balance
        cout << "Deposit Successful.\n";
        
        BalanceEnquiry();
    }    
};

int main() {
    BankAccount b;
    int choice = 0; // Initialized choice to 0 to prevent garbage values
    
    // Fixed the multi-line string syntax
    cout << "----Welcome----\n"
         << "1. Balance Enquiry\n"
         << "2. Deposit\n"
         << "3. Withdraw\n"
         << "4. Exit\n";
         
    while(choice != 4) {
        cout << "\nChoice : ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                b.BalanceEnquiry();
                break;
            case 2:
                b.Deposit();
                break;
            case 3:
                b.Withdraw();
                break;
            case 4:
                cout << "Thank you for using our bank!\n";
                break;
            default:
                cout << "Invalid. Choose (1-4)\n";
        }
    }
    
    return 0;
}