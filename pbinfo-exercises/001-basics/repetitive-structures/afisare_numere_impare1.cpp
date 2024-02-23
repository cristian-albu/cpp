#include <iostream>

int main()
{

    int n, i;

    std::cin >> n;

    if (n % 2 == 0)
    {
        i = n - 1;
    }
    else
    {
        i = n;
    }

    for (; i >= 1; i -= 2)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    return 0;
}