#include <iostream>

int main()
{

    bool a = true;

    bool b = false;

    bool res = a && b;

    bool res2 = a || b;

    bool res3 = !(a && b);

    std::cout << std::boolalpha;

    std::cout << res << " " << res2 << " " << res3 << std::endl;
    return 0;
}