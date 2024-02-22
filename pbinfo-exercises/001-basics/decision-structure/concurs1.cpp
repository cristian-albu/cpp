#include <iostream>

int main()
{

    int a, b, n;

    std::cin >> a;
    std::cin >> b;
    std::cin >> n;

    if (n >= a && n <= b)
    {
        std::cout << "DA" << std::endl;
    }
    else
    {
        std::cout << "NU" << std::endl;
    }
    return 0;
}