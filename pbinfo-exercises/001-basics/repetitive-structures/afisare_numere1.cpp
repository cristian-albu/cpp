#include <iostream>

int main()
{

    int n;
    std::cin >> n;

    for (int i{n}; i > 0; --i)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    return 0;
}