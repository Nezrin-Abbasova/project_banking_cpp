#include <iostream>
#include <iomanip>

void show_balance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 0.0;
    int choice;

std::cout << "********************************\n";
std::cout << "******** BANKING SYSTEM ********\n";
std::cout << "********************************\n";

    do{
        std::cout << "Choices :\n\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice){
            case 1:
                show_balance(balance);
                break;
            case 2:
                balance += deposit();
                show_balance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                show_balance(balance);
                break;
            case 4:
                std::cout << "Process finished successfully!\n";
                break;
            default:
                std::cout << "Invalid choice!\n";     
                break;
        }
    }while(choice != 4);
    
    return 0;
}

void show_balance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n\n";
}

double deposit(){
    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "Invalid amount!\n";
        return 0;
    }
}

double withdraw(double balance){
    double amount = 0;
    std::cout << "Enter amount to be withdrawed: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Invalid amount!\n";
        return 0;
    }
    else if(amount > 0){
        return amount;
    }
    else{
        std::cout << "Invalid amount!\n";
        return 0;
    }
}