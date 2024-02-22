#include <iostream>

int main()
{

    int a, b;

    std::cin >> a;

    std::cin >> b;

    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    int quotient = a / b;

    std::cout << sum << " " << diff << " " << product << " " << quotient << std::endl;
    return 0;
}