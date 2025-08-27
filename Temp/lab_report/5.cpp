/*
5. Write a C++ program to implement a class
called BankAccount that has private member
variables for account number and balance.
Include member functions to deposit and
withdraw money from the account.

Input:

Account Number: AC-1
Balance: 100000
Deposit Amount: 50000
Deposit Successful. Current Balance: 150000.00
Withdrawl Amount: 125000
Withdraw Successful. Current Balance: 25000.00
Withdrawl Amount: 70000
Insufficient Balance
*/

#include <bits/stdc++.h>
using namespace std;
class BankAccount{
private:
    string ac_no;
    double balance;
public:
    BankAccount( string AC_NO, double Balance )
    {
        ac_no = AC_NO;
        balance = Balance;
    }
    void deposit( double value )
    {
        balance += value;
        cout << fixed << setprecision(2) << "Deposit Successful. Current Balance: " << balance << endl;
    }
    void withdraw( double value )
    {
        if( value <= balance )
        {
            balance -= value;
            cout << fixed << setprecision(2) << "Withdraw Successful. Current Balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }
};

int main()
{
    string ac_no;
    double balance, deposit, withdraw;
    cout << "Account Number: ";
    cin >> ac_no;
    cout << "Balance: ";
    cin >> balance;
    BankAccount account1(ac_no, balance);
    cout << "Deposit Amount: ";
    cin >> deposit;
    account1.deposit(deposit);
    cout << "Withdrawl Amount: ";
    cin >> withdraw;
    account1.withdraw(withdraw);
    cout << "Withdrawl Amount: ";
    cin >> withdraw;
    account1.withdraw(withdraw);
    return 0;
}

