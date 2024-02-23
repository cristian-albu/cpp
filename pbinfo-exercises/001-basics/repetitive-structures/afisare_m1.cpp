#include <iostream>

int main()
{

    int n, m;

    std::cin >> n;
    std::cin >> m;

    for (int i{n}; i >= 1; --i)
    {
        if (m == 0)
        {
            break;
        }
        std::cout << i * m << " ";
    }

    std::cout << std::endl;
    return 0;
}