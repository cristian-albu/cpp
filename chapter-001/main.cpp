#include <iostream>

// One line comment

/*
Multi line comments
are like this
*/

int addNumbers(int firstNumber, int secondNumber)
{
    int sum = firstNumber + secondNumber;
    return sum;
}

int main()
{

    std::cout << "Program starting" << std::endl;

    int inputNumber;
    int firstNumber = 12;
    int secondNumber{7};
    std::string full_name;

    int sum = addNumbers(firstNumber, secondNumber);

    std::cout << "First numbers are " << firstNumber << " and " << secondNumber << std::endl
              << "Give another number: ";

    std::cin >> inputNumber;

    std::cout << "Give me a val: ";

    int val;

    std::cin >> val;

    // If this is not present the cin above combines with the getline bellow before the cout is shown
    // std::cin.ignore();

    std::cout << "Second val is: " << val << std::endl;

    int secondSum = addNumbers(sum, inputNumber);

    std::cout << "The total sum is: " << secondSum << std::endl
              << "Now write your name: ";

    std::cout << "Hello " << full_name << std::endl;

    return 0;
}