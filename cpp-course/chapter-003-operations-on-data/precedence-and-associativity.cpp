#include <iostream>

int main()
{

    int a{6};
    int b{3};
    int c{8};
    int d{9};
    int e{3};
    int f{2};
    int g{5};

    int res = a + b * c - d / e - f + g;                // 6 + 24 - 3 - 2 + 5 => 30
    int res2 = a / b * c + d - e + f;                   // 2 * 8 + 9 - 3 + 2 => 16 + 8 => 24
    int res3 = a + (b * c) - (d / e) - f * (a + c) + e; // 6 + 24 - 3 - 2 * 14 + 3 => 27 - 28 + 3 => 2

    std::cout << res << " " << res2 << " " << res3 << std::endl;
    return 0;
}