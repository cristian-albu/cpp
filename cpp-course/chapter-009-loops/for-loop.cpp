#include <iostream>

int main()
{

    for (size_t i{}; i < 10; ++i)
    {
        std::cout << "I love JavaScript" << std::endl;
    }

    for (size_t i{0}, x{5}, y{22}; y > 15; ++i, x += 5, y -= 1)
    {
        std::cout << i << " " << x << " " << y << std::endl;
    }

    // collection of ints
    int bag_of_vals[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int val : bag_of_vals)
    {
        std::cout << val << std::endl;
    }

    return 0;
}