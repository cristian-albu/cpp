#include <iostream>
#include <limits>

int main()
{

    std::cout << std::numeric_limits<short>::min() << std::endl;
    std::cout << std::numeric_limits<float>::min() << std::endl;
    std::cout << std::numeric_limits<long double>::min() << std::endl;
    std::cout << std::numeric_limits<float>::max() << std::endl;
    std::cout << std::numeric_limits<unsigned int>::max() << std::endl;
    return 0;
}