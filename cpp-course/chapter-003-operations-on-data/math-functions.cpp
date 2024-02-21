#include <iostream>
#include <cmath>

int main()
{
    double weight{-7.7};

    float num = 10000;

    double hex_area = ((3 * std::sqrt(3)) / 2) * std::pow(6.7, 2);

    std::cout << std::abs(weight) << std::endl;

    std::cout << std::sqrt(num) << std::endl;

    std::cout << std::round(weight) << std::endl;

    std::cout << std::ceil(weight) << std::endl;

    std::cout << std::log10(num) << std::endl;

    std::cout << hex_area << std::endl;

    return 0;
}