#include <iostream>
#include <ctime>

int main()
{
    int num;
    int guess;
    int tries;

    srand(time(0));
    num = (rand() % 100) +1;


    std::cout << "************ Guess the Number ************: " << '\n';
    
    do{
        std::cout << "Enter a number between 1 to 100: ";
        std::cin >> guess;
        tries++;

        if(guess>num){
        std::cout << "The number is too high \n";
        }
        else if(guess<num){
        std::cout << "The number is too low \n";
        }
        else{
        std::cout << "CORRECT! # of tries: " << tries << '\n';
        }
        
    } while (guess != num);

    return 0;
} 
