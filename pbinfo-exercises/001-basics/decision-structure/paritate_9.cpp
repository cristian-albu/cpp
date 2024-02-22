#include <iostream>

int main()
{
    int n, m, res;

    std::cin >> n;
    std::cin >> m;

    if ((n % 2 == 0 && m % 2 == 0) || (n % 2 != 0 && m % 2 != 0))
    {

        res = n % 10 + (n % 100 / 10) + m % 10 + (m % 100 / 10);
    }
    else
    {
        res = n % 10 * (n % 100 / 10) * m % 10 * (m % 100 / 10);
        ;
    }

    std::cout << res << std::endl;
    return 0;
}