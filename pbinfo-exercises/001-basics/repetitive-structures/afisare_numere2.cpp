#include <iostream>

int main()
{

    unsigned int n;

    std::cin >> n;

    if (n == 0)
    {
        return 0;
    }

    for (unsigned int i{1}; i <= n; ++i)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    for (unsigned int i{n}; i > 0; --i)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    return 0;
}