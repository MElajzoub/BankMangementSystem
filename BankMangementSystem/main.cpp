#include "Bank.h"
#include <iostream>

int main() {
    Bank bank;
    std::string name;
    double amount;
    int choice;

    while (true) {
        std::cout << "\nBank Management System\n";
        std::cout << "1. Create Account\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. View Account History\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter initial balance: ";
            std::cin >> amount;
            bank.createAccount(name, amount);
            break;
        case 2:
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter deposit amount: ";
            std::cin >> amount;
            if (auto* account = bank.getAccount(name)) {
                account->deposit(amount);
            }
            else {
                std::cout << "Account not found.\n";
            }
            break;
        case 3:
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter withdrawal amount: ";
            std::cin >> amount;
            if (auto* account = bank.getAccount(name)) {
                account->withdraw(amount);
            }
            else {
                std::cout << "Account not found.\n";
            }
            break;
        case 4:
            std::cout << "Enter name: ";
            std::cin >> name;
            if (auto* account = bank.getAccount(name)) {
                account->printHistory();
            }
            else {
                std::cout << "Account not found.\n";
            }
            break;
        case 5:
            std::cout << "Exiting program.\n";
            return 0;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}