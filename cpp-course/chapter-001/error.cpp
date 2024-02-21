#include <iostream>

int main()
{

    // Compile error - not ";" at the end of the line
    // std::cout << "Hello World" << std::endl

    std::cout << "Runtime error" << std::endl;
    // Runtime error - division by zero
    int a = 1 / 0;
    std::cout << "Value is:" << a << std::endl;
    return 0;
}