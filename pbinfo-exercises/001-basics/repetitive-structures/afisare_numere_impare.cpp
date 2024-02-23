#include <iostream>

int main()
{

    unsigned int n;

    std::cin >> n;

    if (n == 0)
    {
        return 0;
    }

    for (unsigned int i{n * 2}; i > 0; i -= 2)
    {
        std::cout << i - 1 << " ";
    }

    std::cout << std::endl;
    return 0;
}