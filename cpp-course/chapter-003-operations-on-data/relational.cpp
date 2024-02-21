#include <iostream>

int main()
{

    int number1 = 1;

    int number2 = 2;

    std::cout << std::boolalpha;

    std::cout << (number1 == number2) << std::endl;

    std::cout << (number1 <= number2) << std::endl;

    std::cout << (number1 > number2) << std::endl;

    std::cout << (number1 != number2) << std::endl;

    return 0;
}