#include <iostream>
#include <bitset>


int main() {

    unsigned short int shift_data = static_cast<unsigned short int>(0b11111111 << 2);
    std::cout << "Shift data (dec): " << std::dec << shift_data << std::endl;
    std::cout << "Shift data (bin): " << std::bitset<16>(shift_data) << std::endl;

    unsigned short int and_data = static_cast<unsigned short int>(0b1 & 0b0);
    std::cout << "And data (dec): " << std::dec << and_data << std::endl;

    unsigned short int or_data = static_cast<unsigned short int>(0b1 | 0b0);
    std::cout << "Or data (dec): " << std::dec << or_data << std::endl;

    unsigned short int not_data = static_cast<unsigned short int>(~0b1111111111111110);
    std::cout << "Not data (dec): " << std::dec << not_data << std::endl;

    unsigned short int xor_data = static_cast<unsigned short int>(0b1 ^ 0b0);
    std::cout << "Xor data (dec): " << std::dec << xor_data << std::endl;


    const unsigned char mask_bit_0{ 0b00000001 };
    const unsigned char mask_bit_1{ 0b00000010 };
    const unsigned char mask_bit_2{ 0b00000100 };
    const unsigned char mask_bit_3{ 0b00001000 };
    const unsigned char mask_bit_4{ 0b00010000 };
    const unsigned char mask_bit_5{ 0b00100000 };
    const unsigned char mask_bit_6{ 0b01000000 };
    const unsigned char mask_bit_7{ 0b10000000 };

    unsigned char var{ 0b00000000 };
    std::cout << "Shift data (bin): " << std::bitset<8>(var) << std::endl;

    var |= mask_bit_1;
    std::cout << "Shift data (bin): " << std::bitset<8>(var) << std::endl;

    var |= mask_bit_5;
    std::cout << "Shift data (bin): " << std::bitset<8>(var) << std::endl;

    var &= (~mask_bit_1); // reset 
    std::cout << "Shift data (bin): " << std::bitset<8>(var) << std::endl;

    var &= (~mask_bit_5); // reset
    std::cout << "Shift data (bin): " << std::bitset<8>(var) << std::endl;

    var |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
    std::cout << "Shift data (bin): " << std::bitset<8>(var) << std::endl;


    var &= ~(mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
    std::cout << "Shift data (bin): " << std::bitset<8>(var) << std::endl;

    var |= (mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
    std::cout << "Shift data (bin): " << std::bitset<8>(var) << std::endl;


    var ^= (mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
    std::cout << "Shift data (bin): " << std::bitset<8>(var) << std::endl;

    return 0;
}