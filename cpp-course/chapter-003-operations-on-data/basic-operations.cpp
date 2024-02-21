#include <iostream>

int main()
{

    int number1 = 2;
    int number2 = 7;

    // Addition

    int result1 = number1 + number2;

    // Subtraction
    int result2 = number1 - number2;

    // Multiplication

    int result3 = number1 * number2;

    // Division

    int result4 = number1 / number2; // result as int will not automatically transform into fraction

    float result5 = float(number1) / number2;

    // or
    // float result5 = static_cast<float>(number1) / number2;

    // Modulus

    int result6 = number2 % number1;

    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;
    std::cout << result3 << std::endl;
    std::cout << result4 << std::endl;
    std::cout << result5 << std::endl;
    std::cout << result6 << std::endl;

    return 0;
}