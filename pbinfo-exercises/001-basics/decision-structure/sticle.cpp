#include <iostream>

int main()
{

    int x, y, n;

    std::cin >> x;
    std::cin >> y;

    n = y / x;

    if (y % x != 0)
    {
        n = y / x + 1;
    }
    else
    {
        n = y / x;
    }

    std::cout << n << std::endl;
    return 0;
}