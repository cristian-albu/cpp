#include <iostream>

int main()
{

    int num1{55};
    int num2{45};

    if (num1 > num2)
    {
        std::cout << "Num 1 is bigger" << std::endl;
    }
    else if (num1 > num2 + 5)
    {
        std::cout << "Num 1 is bigger than num 2 + 5" << std::endl;
    }
    else
    {
        std::cout << "Num 1 is smaller" << std::endl;
    }

    switch (num1)
    {
    case 55:
        std::cout << "Num1 is 55" << std::endl;
        break;
    case 45:
        std::cout << "Num1 is 45" << std::endl;
        break;

    default:
        std::cout << "Num1 is not 45 or 55" << std::endl;
        break;
    }

    // ternary
    bool res = (num1 >= 55) ? "True" : "False";
    std::cout << res << std::endl;

    constexpr bool condition{false};
    if constexpr (!condition)
    {
        std::cout << "Condition is false" << std::endl;
    }

    // You can create a initializer variable inside the if that is available to the whole if block including the else. But only 1
    bool some_condition{false};

    if (bool new_var{false}; some_condition)
    {
        std::cout << new_var << std::endl;
    }
    else
    {
        std::cout << new_var << std::endl;
    }

    return 0;
}