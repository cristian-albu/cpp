#include <iostream>

int main()
{
    int f, b, n, res;

    std::cin >> f;

    std::cin >> b;

    std::cin >> n;

    res = f * n * 3 + b * n * 2;

    std::cout << res << std::endl;
    return 0;
}