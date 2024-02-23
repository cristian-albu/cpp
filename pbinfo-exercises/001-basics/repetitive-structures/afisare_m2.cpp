#include <iostream>

int main()
{

    int a, b;

    std::cin >> a;
    std::cin >> b;

    for (int i{1}; i <= b; ++i)
    {
        if (a == 0)
        {
            break;
        }
        std::cout << a * i << " ";
    }

    std::cout << std::endl;
    return 0;
}