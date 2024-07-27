#include <iostream>

void checkBalance(double balance);
double makeDeposit(double balance);
double makeWithdrawal();

int main() {

    int choice;
    double balance = 0.0;

    std::cout<<"Welcome to the Bank Manager\n";

    do {
    std::cout<<"What would you like to do?\n";
    std::cout<<"1. Check Balance\n";
    std::cout<<"2. Make a Deposit\n";
    std::cout<<"3. Make a Withdrawal\n";
    std::cout<<"4. Exit\n";

    std::cin>>choice;

    switch(choice) {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance += makeDeposit(balance);
            checkBalance(balance);
            break;
        case 3:
            balance -= makeWithdrawal();
            checkBalance(balance);
            break;
        }
    } while(choice != 4);
}

void checkBalance(double balance) {
    std::cout<<"Your balance is " << balance << "\n";
}

double makeDeposit(double balance) {
    
    double amount = 0.0;

    std::cout<<"Please enter the amount you would like to deposit: ";
    std::cin>>amount;
    return amount;
}

double makeWithdrawal() {

    double amount = 0.0;

    std::cout<<"Please enter the amount you would like to withdraw: ";
    std::cin>>amount;
    return amount;

}