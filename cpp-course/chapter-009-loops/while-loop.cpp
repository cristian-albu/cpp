#include <iostream>

int main()
{

    const unsigned int COUNT{10};

    unsigned int i{0};

    while (i < COUNT)
    {
        if (i == 5)
        {
            ++i;
            continue;
        }

        if (i == 9)
        {
            break;
        }
        std::cout << i << std::endl;

        ++i;
    }

    unsigned int j{0};

    do
    {
        std::cout << j << std::endl;
        ++j;
    } while (j < COUNT);

    return 0;
}