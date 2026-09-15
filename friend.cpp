#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    int balance;

public:

    BankAccount(int a, int b)
    {
        accountNumber = a;
        balance = b;
    }

    friend void compareBalance(BankAccount x, BankAccount y);
};

void compareBalance(BankAccount x, BankAccount y)
{
    if (x.balance > y.balance)
        cout << "Account " << x.accountNumber << " has the higher balance.";
    else
        cout << "Account " << y.accountNumber << " has the higher balance.";
}

int main()
{
    BankAccount acc1(101, 45000);
    BankAccount acc2(102, 62000);

    compareBalance(acc1, acc2);

    return 0;
}