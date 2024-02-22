#include <iostream>

// Global variable
int static_var{80}; // static - dies at the end of program

void some_function()
{
    // local variable to some_function
    int local_var{30};   // automatic dies at the of block
    int dynamic_var{50}; // you decide when in dies
}

int main()
{
    // local variable to the main
    int local_var2{10};   // automatic dies at the of block
    int dynamic_var2{60}; // you decide when in dies

    {
        // local variable to this block
        int local_var3{10};   // automatic dies at the of block
        int dynamic_var3{60}; // you decide when in dies
    }
    return 0;
}