#include <iostream>

int main()
{

    int a, b, c, res;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a <= b && a <= c)
    {
        res = a;
    }
    else if (b <= a && b <= c)
    {
        res = b;
    }
    else
    {
        res = c;
    }

    std::cout << res << std::endl;
    return 0;
}