#include <iostream>

int main()
{

    int dogs, cats, chickens, res;

    std::cin >> dogs;

    cats = dogs * 2;

    chickens = cats * 2;

    res = dogs + cats + chickens;

    std::cout << res << std::endl;

    return 0;
}