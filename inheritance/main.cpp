#include <iostream>
#include "Account.h"
#include "SavingAccount.h"

using namespace std;

int main()
{
    cout << "\n=== Account ==================================" << endl;
    Account a1;
    a1.deposit(2000.0);
    a1.withdraw(500.0);

    cout << "\n=== Saving Account ============================" << endl;
    SavingAccount s1;
    s1.deposit(2000.0);
    s1.withdraw(500.0);

    cout << endl;
    return 0;
}