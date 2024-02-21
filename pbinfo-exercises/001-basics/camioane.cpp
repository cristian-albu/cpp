#include <iostream>

int main()
{

    int t1, t2, n, m, z;
    std::cin >> t1;
    std::cin >> t2;
    std::cin >> n;
    std::cin >> m;
    std::cin >> z;

    int t1_load = t1 * n;
    int t2_load = t2 * m;

    int res = (t1_load + t2_load) * z;

    std::cout << res << std::endl;

    return 0;
}