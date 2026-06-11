#include<iostream>
using namespace std;

class Account
{
private:
    int accountNumber;
    double balance = 0.0;
public:
    Account(int accountNumber, double balance)
    {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    int getAccountNumber()
    {
        return accountNumber;
    }
    double getBalance()
    {
        return balance;
    }

    void setBalance(double balance)
    {
        this->balance =balance;
    }
    void credit(double amount)
    {
        balance += amount;
    }
    void debit(double amount)
    {
        if(amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout<<"You don't have that much money in your account."<<endl;
        }
    }
    void print()
    {
        cout<<accountNumber<<endl;
        cout<<balance<<endl;
    }
};

int main()
{
    Account obj(103,1000.0);
    obj.setBalance(2000.0);
    obj.credit(1000.0);
    obj.debit(500.0);
    obj.print();
}
