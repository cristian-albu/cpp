#include <iostream>

int main()
{

    int scores[10];

    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    double salaries[5]{12.5, 7.5, 13.2, 8.1, 9.3};

    for (size_t i{0}; std::size(scores); ++i)
    {
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }

    for (double salary : salaries)
    {
        std::cout << "Salary: " << salary << std::endl;
    }

    return 0;
}
