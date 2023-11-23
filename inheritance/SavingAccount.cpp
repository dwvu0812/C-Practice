#include <iostream>
#include "SavingAccount.h"
using namespace std;

SavingAccount::SavingAccount() {}
SavingAccount::~SavingAccount() {}

void SavingAccount::deposit(double amount)
{
    cout << "SavingAccount deposit called with " << amount << endl;
}

void SavingAccount::withdraw(double amount)
{
    cout << "SavingAccount withdraw called with " << amount << endl;
}