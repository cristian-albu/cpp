#include <iostream>

int main()
{

    int value = 5;

    std::cout << value++ << std::endl; // 5
    std::cout << value << std::endl;   // 6

    std::cout << ++value << std::endl; // 7
    return 0;
}