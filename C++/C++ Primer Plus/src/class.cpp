#include <iostream>
#include "include.h"

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;

format setFormat();
void restore(format f, precis p);

Brass::Brass(const std::string &s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}
void Brass::Deposit(double amt)
{
    if (amt < 0)
        std::cout << "Negative deposit not allowed; deposit is cancelled.\n";
    else
        balance += amt;
}
void Brass::Withdraw(double amt)
{
    format initialSate = setFormat();
    precis prec = std::cout.precision(2);

    if (amt < 0)
        std::cout << "Withdrawal amout must be positive; Withdrawal canceled.\n";
    else if (amt <= balance)
        balance == amt;
    else
        std::cout << "Withdrawal amount of $" << amt << " exceeds your balance.\nWithdrawal canceled.\n";
    restore(initialSate, prec);
}
double Brass::Balance() const
{
    return balance;
}
void Brass::ViewAcct() const
{
    format initialStat = setFormat();
    precis prec = std::cout.precision(2);
    std::cout << "Client: " << fullName << std::endl;
    std::cout << "Account Number: " << acctNum << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
    restore(initialStat, prec);
}
// TODO