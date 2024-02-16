#include <iostream>

int main()
{
    int number1 = 15;         // Decimal
    int number2 = 017;        // Octal
    int number3 = 0x0f;       // Hexadeciaml
    int number4 = 0b00001111; // Binary

    std::cout << "Number1: " << number1 << std::endl;
    std::cout << "Number2: " << number2 << std::endl;
    std::cout << "Number3: " << number3 << std::endl;
    std::cout << "Number4: " << number4 << std::endl;

    // Whole numbers - int - 4 Bytes (32 bits) & types of initialization

    // Braced initialization
    int count;              // Initializes to garbage value
    int count2{};           // Initializes to 0
    int count3{3};          // Initializes to 3
    int count4{count3 + 4}; // Initializes to 7

    // Assignment initialization
    int count5 = 4; // Initializes to 4
    // int count5 = 3; Redeclaration - will throw error

    // Functional initialization
    int count6(5);   // Initializes to 5
    int count7(2.9); // Initializes to 2 - information is lost

    std::cout << "Ints: " << count << ", " << count2 << ", " << count3 << ", " << count4 << ", " << count5 << ", " << count6 << ", " << count7 << std::endl;

    // Usually snake_case is used for variables
    int size_of_variable = sizeof(count); // gives the size in bytes

    std::cout << size_of_variable << std::endl;

    // Both the values are signed by default
    int value1{10};
    int value2{-300};

    // Explicit declaration

    unsigned value3{5}; // [0, 4,294,967,295] - 2^32 = 32 bits
    signed value4{-5};  // [-2,147,483,648, 2,147,483,647] -  2^31 (31bits) + sign data (1bit) = 32 bits

    // Signed/unsigned tip: sign like the minus sign. Unsigned like it has not minus sign

    std::cout << value1 << ", " << value2 << ", " << value3 << ", " << value4 << std::endl;

    // Flag other dimensions

    // Short - 2 Bytes (16bits)
    short short_var{-32768};
    short int short_int{455};
    signed short signed_short{122};
    signed short int signed_short_int{-456};    // [-32768, 32767]
    unsigned short int unsigned_short_int{456}; // [0, 65535]

    int normal_int{88};       // At least 16 bits or 2 Bytes
    long long_var{88};        // At least 32 bits or 4 Bytes
    long int long_int{88};    // Same thing
    long long long_long{888}; // At least 64 bits or 8 Bytes
    unsigned long long int unsgined_long_long_int{1234};

    // Long - 4 or 8 Bytes (32-64bits)

    return 0;
}
