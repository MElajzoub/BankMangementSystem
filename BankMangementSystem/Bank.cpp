#include "Bank.h"
#include <iostream>

void Bank::createAccount(const std::string& name, double initialBalance) {
    accounts.emplace_back(name, initialBalance);
    std::cout << "Account created for " << name << " with initial balance $" << initialBalance << ".\n";
}

Account* Bank::getAccount(const std::string& name) {
    for (auto& account : accounts) {
        if (account.getName() == name) {
            return &account;
        }
    }
    return nullptr;
}