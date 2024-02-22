#include <iostream>

int main()
{

    std::cout << "Welcome to box calculator. Please type in length, width and height information :" << std::endl;

    double len, wid, hei;

    std::cin >> len;
    std::cin >> wid;
    std::cin >> hei;

    double base = wid * len;
    double vol = base * hei;

    std::cout << "The base area is : " << base << std::endl;
    std::cout << "The volume is : " << vol << std::endl;
    return 0;
}