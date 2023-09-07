# Basic operators

-   Arithmetic Operators: + (addition), - (subtraction), \* (multiplication), / (division), % (modulus)

```cpp
int a = 10;
int b = 5;

// Addition (+)
int sum = a + b; // sum is 15

// Subtraction (-)
int difference = a - b; // difference is 5

// Multiplication (*)
int product = a * b; // product is 50

// Division (/)
int quotient = a / b; // quotient is 2 (integer division)

// Modulus (%)
int remainder = a % b; // remainder is 0

```

-   Relational Operators: == (equal to), != (not equal to), > (greater than), < (less than), >= (greater than or equal to), <= (less than or equal to)

```cpp
int x = 5;
int y = 7;

// Equal to (==)
bool isEqual = (x == y); // isEqual is false

// Not equal to (!=)
bool isNotEqual = (x != y); // isNotEqual is true

// Greater than (>)
bool isGreaterThan = (x > y); // isGreaterThan is false

// Less than (<)
bool isLessThan = (x < y); // isLessThan is true

// Greater than or equal to (>=)
bool isGreaterOrEqual = (x >= y); // isGreaterOrEqual is false

// Less than or equal to (<=)
bool isLessOrEqual = (x <= y); // isLessOrEqual is true

```

-   Logical Operators: && (logical AND), || (logical OR), ! (logical NOT)

```cpp
bool a = true;
bool b = false;

// Logical AND (&&)
bool resultAND = a && b; // resultAND is false

// Logical OR (||)
bool resultOR = a || b; // resultOR is true

// Logical NOT (!)
bool resultNOT = !a; // resultNOT is false

```

-   Assignment Operators: = (assignment), += (addition assignment), -= (subtraction assignment), \*= (multiplication assignment), /= (division assignment), %= (modulus assignment)

```cpp
int x = 10;
int y = 5;

// Assignment (=)
x = y; // x is now 5

// Addition assignment (+=)
x += 3; // x is now 8

// Subtraction assignment (-=)
x -= 2; // x is now 6

// Multiplication assignment (*=)
x *= 4; // x is now 24

// Division assignment (/=)
x /= 3; // x is now 8

// Modulus assignment (%=)
x %= 5; // x is now 3

```

-   Increment/Decrement Operators: ++ (increment), -- (decrement)

```cpp
int num = 5;

// Increment (++): Increases the value by 1
num++; // num is now 6

// Decrement (--): Decreases the value by 1
num--; // num is now 5 again

// Post-increment and Post-decrement
int a = 10;
int b = a++; // b is assigned 10, then a is incremented to 11

int x = 20;
int y = x--; // y is assigned 20, then x is decremented to 19

// Pre-increment and Pre-decrement
int m = 8;
int n = ++m; // m is incremented to 9, and n is assigned 9

int p = 12;
int q = --p; // p is decremented to 11, and q is assigned 11

```
