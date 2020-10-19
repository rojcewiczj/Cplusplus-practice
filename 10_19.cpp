#include <iostream>
#include <map>
#include <vector>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
#include <string>
#include "Account.cpp"
#include "Savings_Account.h"
using namespace std;


int main()
{  
// Use Account class
cout << "\n=== Account ====================================" << endl;
Account acc {};
acc.deposit(2000.0);
acc.withdraw(500.0);

cout << endl;

Account *p_acc {nullptr};
p_acc = new Account();
p_acc -> deposit(1000.0);
p_acc -> withdraw(500.0);
delete p_acc;






  
    return 0;
} 
