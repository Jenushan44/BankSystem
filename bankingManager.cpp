#include <iostream>

void checkBalance(double balance);

int main() {

    int choice;
    double balance = 0.0;

    std::cout<<"Welcome to the Bank Manager\n";
    std::cout<<"What would you like to do?\n";
    std::cout<<"1. Check Balance";
    std::cout<<"2. Make a Deposit";
    std::cout<<"3. Make a Withdrawal";
    std::cout<<"4. Exit";

    std::cin>>choice;

    switch(choice) {
        case 1:
            checkBalance(balance);
    }
    



}

void checkBalance(double balance) {
    std::cout<<"Your balance is " << balance;
}

