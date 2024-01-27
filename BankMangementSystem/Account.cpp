#include "Account.h"
#include <iostream>

Account::Account(std::string accountName, double initialBalance)
    : name(accountName), balance(initialBalance) {
    history.push_back("Account created. Initial balance: $" + std::to_string(balance));
}

void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        history.push_back("Deposited: $" + std::to_string(amount));
    }
    else {
        std::cout << "Invalid amount.\n";
    }
}

void Account::withdraw(double amount) {
    if (amount <= balance && amount > 0) {
        balance -= amount;
        history.push_back("Withdrawn: $" + std::to_string(amount));
    }
    else {
        std::cout << "Invalid transaction.\n";
    }
}

void Account::printHistory() const {
    std::cout << "Transaction history for " << name << ":\n";
    for (const auto& entry : history) {
        std::cout << entry << std::endl;
    }
}

const std::string& Account::getName() const { return name; }
double Account::getBalance() const { return balance; }