#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string customerName;
    float balance;

public:
    // Parameterized Constructor
    BankAccount(int accNo, string name, float bal)
    {
        accountNumber = accNo;
        customerName = name;
        balance = bal;
    }

    // Friend Function
    friend void compareBalance(const BankAccount &a, const BankAccount &b);
};

// Friend Function Definition
void compareBalance(const BankAccount &a, const BankAccount &b)
{
    if (a.balance > b.balance)
    {
        cout << "Account Holder with Higher Balance:" << endl;
        cout << "Account Number : " << a.accountNumber << endl;
        cout << "Customer Name : " << a.customerName << endl;
        cout << "Balance : " << a.balance << endl;
    }
    else
    {
        cout << "Account Holder with Higher Balance:" << endl;
        cout << "Account Number : " << b.accountNumber << endl;
        cout << "Customer Name : " << b.customerName << endl;
        cout << "Balance : " << b.balance << endl;
    }
}

int main()
{
    BankAccount b1(101, "Sakshi", 50000);
    BankAccount b2(102, "Rahul", 75000);

    compareBalance(b1, b2);

    return 0;
}