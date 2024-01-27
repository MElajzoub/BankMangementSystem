#ifndef BANK_H
#define BANK_H

#include "Account.h"
#include <vector>
#include <string>

class Bank {
public:
    void createAccount(const std::string& name, double initialBalance);
    Account* getAccount(const std::string& name);

private:
    std::vector<Account> accounts;
};

#endif 
