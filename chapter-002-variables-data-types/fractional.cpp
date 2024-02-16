#include <iostream>

int main()
{
    float number1{1.5123};
    float number2{1.12345678901234567890f};
    double number3{1.12345678901234567890f};
    long double number4{1.12345678901234567890L};

    double numberA{5.6};
    double numberB{3.5};

    std::cout << "Sizeof float: " << sizeof(float) << std::endl;             // 4 Bytes - 7 digits
    std::cout << "Sizeof double: " << sizeof(double) << std::endl;           // 8 Bytes - ~15 digits
    std::cout << "Sizeof long double: " << sizeof(long double) << std::endl; // 16 Bytes 15+ digits
    std::cout << numberA * numberB << std::endl;

    return 0;
}