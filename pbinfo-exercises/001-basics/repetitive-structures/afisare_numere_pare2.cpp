#include <iostream>

int main()
{

    unsigned int n;

    std::cin >> n;

    for (unsigned int i{2}; i <= n; i += 2)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    return 0;
}