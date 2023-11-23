#ifndef _SAVING_ACCOUNT_
#define _SAVING_ACCOUNT_
#include "Account.h"

class SavingAccount : public Account
{
public:
    void deposit(double amount);
    void withdraw(double amount);
    SavingAccount();
    ~SavingAccount();
};

#endif // _SAVING_ACCOUNT_