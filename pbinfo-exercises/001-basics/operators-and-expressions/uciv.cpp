#include <iostream>

int main()
{

    int x, y;

    std::cin >> x;

    std::cin >> y;

    int res = x + y;

    int last_digit = res % 10;

    std::cout << last_digit << std::endl;

    return 0;
}