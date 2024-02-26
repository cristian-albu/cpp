#include <iostream>

int main()
{

    int scores[3];

    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    double salaries[5]{12.5, 7.5, 13.2, 8.1, 9.3};

    for (size_t i{0}; i < std::size(scores); ++i)
    {
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }

    for (double salary : salaries)
    {
        std::cout << "Salary: " << salary << std::endl;
    }

    // Multidimensional Arrays

    int packages[4][3]; // Occupies 48 bytes in memory (4x3x4bytes)

    for (size_t i{0}; i < 4; ++i)
    {
        for (size_t j{0}; j < 3; ++j)
        {
            std::cout << "The i is " << i << " and the j is " << j << " . Packages[i][j]: " << packages[i][j] << std::endl;
        }
    }

    // You can initialize multidimensional array with values

    int packages1[4][3]{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};

    for (size_t i{0}; i < std::size(packages1); ++i)
    {
        for (size_t j{0}; j < std::size(packages1[i]); ++j)
        {
            std::cout << "The i is " << i << " and the j is " << j << " . Packages1[i][j]: " << packages1[i][j] << std::endl;
        }
    }

    // Char arrays

    // Not so good. This will possibly not add null character at the end if it passes the length of 15
    char charArr[][15]{
        {'a', 'b', 'c'},
        {'d', 'e', 'f'}};

    // Good

    char charArr2[][15]{
        "abc",
        "def"};

    for (size_t i{0}; i < std::size(charArr); ++i)
    {
        std::cout << charArr[i] << std::endl;
    }

    for (size_t i{0}; i < std::size(charArr2); ++i)
    {
        std::cout << charArr2[i] << std::endl;
    }

    return 0;
}
