#include <iostream>

int main()
{

    // Booleans take up 8bits in memory (1 Byte)

    bool red_light{true};

    bool green_light{false};

    if (red_light == true)
    {
        std::cout << "Stop" << std::endl;
    }
    else
    {
        std::cout << "Go through" << std::endl;
    }

    green_light = true;

    std::cout << std::boolalpha;
    std::cout << green_light << std::endl;
    return 0;
};