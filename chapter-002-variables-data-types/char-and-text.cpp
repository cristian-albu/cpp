#include <iostream>

int main()
{

    // 1 char occupies 1 Bytes (8 bits)

    char value = 65; // ASCII character code for "A"
    char value2 = 'a';
    char value3{'b'};

    std::cout << "value: " << value << std::endl;

    std::cout << "value(int): " << static_cast<int>(value) << std::endl;

    std::cout << value2 << value3 << std::endl;

    return 0;
}