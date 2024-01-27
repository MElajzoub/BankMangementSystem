#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <vector>

class Account {
public:
    Account(std::string accountName, double initialBalance);

    void deposit(double amount);
    void withdraw(double amount);
    void printHistory() const;

    const std::string& getName() const;
    double getBalance() const;

private:
    std::string name;
    double balance;
    std::vector<std::string> history;
};

#endif 