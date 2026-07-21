#include <iostream>

int getdigit(const int number);
int sumofOdd(const std::string cardNumber);
int sumofEven(const std::string cardNumber);

int main(){

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter your card number: \n";
    std::cin >> cardNumber;



    result = sumofOdd(cardNumber) + sumofEven(cardNumber);

    if(result%10 == 0){
        std::cout << cardNumber << " is valid";
    }
    else{
        std::cout << cardNumber << " is not valid";
    }

    return 0;
}

int getdigit(const int number){
    
    return number % 10 + (number / 10 % 10);
}
int sumofOdd(const std::string cardNumber){
    
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >=0; i-=2){
        sum +=  getdigit((cardNumber[i] - '0'));
    }
    
    return sum;
}
int sumofEven(const std::string cardNumber){

    int sum = 0;

    for(int i = cardNumber.size() - 2; i >=0; i-=2){
        sum +=  getdigit((cardNumber[i] - '0')*2);
    }

    return sum;
}
