#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "************ CALCULATOR ************\n";

    std::cout << "Enter either (+ - * / %)";
    std::cin >> op;

    std::cout << "enter #1: ";
    std::cin >> num1;

    std::cout << "enter #2: ";
    std::cin >> num2;

    switch(op){
        case '+':
        result= num1 + num2;
        std::cout << "result: " << result << '\n';
        break;

        case '-':
        result= num1 - num2;
        std::cout << "result: " << result << '\n';
        break;

        case '*':
        result= num1 * num2;
        std::cout << "result: " << result << '\n';
        break;

        case '/':
        result= num1 / num2;
        std::cout << "result: " << result << '\n';
        break;

        default:
        std::cout << "That is not a valid operator";

    }

    std::cout << "************ ********** ************";

    return 0; 
}
