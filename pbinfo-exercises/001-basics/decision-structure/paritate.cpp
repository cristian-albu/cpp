#include <iostream>

int main()
{
    int a;

    std::cin >> a;

    if (a % 2 == 0)
    {
        std::cout << a << " este par" << std::endl;
    }
    else
    {
        std::cout << a << " este impar" << std::endl;
    }
    return 0;
}