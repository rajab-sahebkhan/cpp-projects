#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "what is the length of side a in cm = ";
    std::cin >> a;

    std::cout << "what is the length of side b in cm = ";
    std::cin >> b;

    c=sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The length of the hypotenuse is " << c << " cm";
    


    return 0;
}
