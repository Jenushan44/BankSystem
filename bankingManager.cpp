#include <iostream>
#include <fstream>

void checkBalance(double balance);
double makeDeposit();
double makeWithdrawal(double balance);
void createAccount();

int main() {

    int choice;
    double balance = 0.0;

    std::cout<<"Welcome to the Bank Manager\n";

    do {
    std::cout<<"What would you like to do?\n";
    std::cout<<"1. Check Balance\n";
    std::cout<<"2. Make a Deposit\n";
    std::cout<<"3. Make a Withdrawal\n";
    std::cout<<"4. Create an account\n";
    std::cout<<"5. Exit\n";

    std::cin>>choice;

    switch(choice) {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance += makeDeposit();
            checkBalance(balance);
            break;
        case 3:
            balance -= makeWithdrawal(balance);
            checkBalance(balance);
            break;
        case 4:
            createAccount();
            break;
        case 5: 
            std::cout<<"Thank you for using the bank manager";
            break;
        default:
            std::cout<<"Please enter a valid choice\n";
        }
    } while(choice != 5);
}

void checkBalance(double balance) {
    std::cout<<"Your balance is " << balance << "\n";
}

double makeDeposit() {
    
    double amount = 0.0;

    std::cout<<"Please enter the amount you would like to deposit: ";
    std::cin>>amount;
    return amount;
}

double makeWithdrawal(double balance) {

    double amount = 0.0;

    std::cout<<"Please enter the amount you would like to withdraw: ";
    std::cin>>amount;

    if (amount < 0) {
        std::cout<<"Please enter a valid amount to withdraw";
        return 0;
    } else if (amount > balance) {
        std::cout<<"Insufficient Funds";
        return 0;
    } 
    return amount;
}

void createAccount() {

    std::string firstName;
    std::string lastName;
    std::string birthday;
    std::string password;

    std::cout<<"You have selected to create an account\n";
    std::cout<<"Please enter your first name \n";
    std::cin>>firstName;
    std::cout<<"Please enter your last name: \n";
    std::cin>>lastName;
    std::cout<<"Please enter your date of birth (DD/MM/YYYY): \n";
    std::cin>>birthday;
    std::cout<<"Please create a password: \n";
    std::cin>>password;

    std::ofstream myfile;
    myfile.open("accountInfo.txt", std::ios::app);
    myfile << "Name: " << firstName << lastName << "\n";
    myfile << "Date of Birth: " << birthday << "\n";
    myfile.close();

}