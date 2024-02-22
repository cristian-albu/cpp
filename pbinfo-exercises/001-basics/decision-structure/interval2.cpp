#include <iostream>

int main()
{

    int a, b, x;

    std::cin >> a;
    std::cin >> b;
    std::cin >> x;

    if (x >= a && x <= b)
    {
        std::cout << "DA" << std::endl;
    }
    else
    {
        std::cout << "NU" << std::endl;
    }

    return 0;
}