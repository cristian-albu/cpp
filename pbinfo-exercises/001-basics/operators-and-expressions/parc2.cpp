#include <iostream>

int main()
{

    int n, trees, branches, nests, birds;

    std::cin >> n;

    trees = n * n;
    branches = trees * n;
    nests = branches * n;
    birds = nests * n;

    std::cout << birds << std::endl;

    return 0;
}