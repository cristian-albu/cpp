#include <iostream>

int build_number(int dig1, int dig2)
{
    if (dig1 * 10 + dig2 > dig2 * 10 + dig1)
    {
        return dig1 * 10 + dig2;
    }
    else
    {
        return dig2 * 10 + dig1;
    }
}

int main()
{

    int n, m, res1, res2, res3;

    std::cin >> n;
    std::cin >> m;

    res1 = build_number(n % 10, m % 10);
    res2 = build_number((n % 100) / 10, (m % 100) / 10);
    res3 = build_number((n % 1000) / 100, (m % 1000) / 100);

    std::cout << res3 << " " << res2 << " " << res1 << std::endl;
    return 0;
}