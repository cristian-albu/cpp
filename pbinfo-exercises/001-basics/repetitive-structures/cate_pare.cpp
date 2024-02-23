#include <iostream>

int main()
{

    int count{0};

    while (true)
    {
        int a;
        std::cin >> a;

        if (a == 0)
        {
            break;
        }

        if (a % 2 == 0)
        {
            count++;
        }
    }

    if (count == 0)
    {
        std::cout << "NU EXISTA" << std::endl;
    }
    else
    {
        std::cout << count << std::endl;
    }
    return 0;
}