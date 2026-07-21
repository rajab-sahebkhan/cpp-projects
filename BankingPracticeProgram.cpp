#include <iostream>
#include <iomanip> //for adding precision with decimal points

void showbalance(double balance);
double deposit (double balance);
double withdrawal(double balance);


int main()
{
    double balance = 100;
    int choice = 0;
    
    do{
    std::cout << "*******************\n";
    std::cout << "Enter your choice.\n";
    std::cout << "1. Show balance.\n";
    std::cout << "2. Deposit money.\n";
    std::cout << "3. Withdrawal of money.\n";
    std::cout << "4. Exit.\n";
    std::cout << "*******************\n";
    std::cin >> choice;

    std::cin.clear(); //The primary purpose of std::cin.clear() is to reset the error flags on the input stream (std::cin).
    fflush(stdin); //The primary purpose of fflush(stdin) is to discard any leftover invalid input
    //now the program wont show continous failure when entered for eg "pizza" because it wasn't int datatype.

    switch(choice)
    {
        case 1:
        showbalance(balance);
        break;
        case 2:
        balance += deposit(balance);
        showbalance(balance);
        break;
        case 3:
        balance -= withdrawal(balance);
        showbalance(balance);
        break;
        case 4:
        std::cout << "Thank you for visiting.";
        break;
        default:
        std::cout << "Invalid choice\n";
    } 
  }while(choice !=4);

  return 0;
}


void showbalance(double balance){
    std::cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance << '\n'; //2 to set the precision of decimal points.
}

double withdrawal(double balance){
    double amount = 0;

    std::cout << "Enter the amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "INSUFFICIENT FUNDS!\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "ENTER A VALID AMOUNT!\n";
        return 0;
    }
    else{
    return amount;
    }
}

double deposit (double balance){

    double amount = 0;
    std::cout << "Enter the amount to be deposited: ";
    std::cin >> amount;

    if(amount < 0){
        std::cout << "ENTER A VALID AMOUNT!\n";
        return 0;
    }
    else{
        return amount;
    }

}
