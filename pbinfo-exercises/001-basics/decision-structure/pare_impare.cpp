#include <iostream>

int main()
{
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if ((a % 2 == 0 && b % 2 == 0) || (a % 2 == 0 && c % 2 == 0) || (b % 2 == 0 && c % 2 == 0))
    {
        std::cout << "pare" << std::endl;
    }
    else
    {
        std::cout << "impare" << std::endl;
    }

    return 0;
}