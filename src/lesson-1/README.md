## Basic variables

C++ provides several basic data types that you can use to declare variables and represent different types of data. Here are some of the fundamental data types in C++:

1. Integer Types:

    - int: Typically a 32-bit signed integer.
    - long: Typically a 32-bit or 64-bit signed integer (platform-dependent).
    - long long: A 64-bit signed integer.

    ```cpp
    int myInt = 12345;
    long myLong = 1234567890L;
    long long myLongLong = 123456789012345LL;
    ```

2. Floating-Point Types:

    - float: Single-precision floating-point number.
    - double: Double-precision floating-point number.

    ```cpp
    float myFloat = 3.14f;
    ```

3. Character Types:

    - char: A single character (8 bits).

    ```cpp
    char myChar = 'A';
    ```

4. Boolean Type:

    - bool: Represents true or false.

    ```cpp
    bool myBool = true;
    ```

5. Strings
   std::string is a complex data type designed to store sequences of characters.

    ```cpp
    //
    #include <string>
    int main()
    {
        // Declare and initialize a string
        std::string myString = "Hello, World!";

        // rest of the program
    }

    ```

### Signed Types:

Default Behavior: In C++, most integer types (e.g., int, long, long long) are signed by default. This means that they can represent both positive and negative values.

Value Range: For a signed type of n bits, it can represent values in the range of -2^(n-1) to 2^(n-1) - 1. For example, a 32-bit int can represent values from approximately -2 billion to 2 billion.

```cpp
int signedInt = -42;  // Negative value
```

### Unsigned Types:

Declaration: To create an unsigned variable, you use the unsigned keyword before the data type. For example, unsigned int or unsigned char.

Value Range: Unsigned types can only represent non-negative values (zero and positive values). They can use the full range of non-negative values within the given number of bits.

Example:

```cpp
unsigned int unsignedInt = 42;  // Only non-negative values allowed
```

These are not all of them

## g++

g++ command is a GNU c++ compiler invocation command, which is used for preprocessing, compilation, assembly and linking of source code to generate an executable file. The different “options” of g++ command allow us to stop this process at the intermediate stage.

```
g++ hello.cpp
```

This compiles and links hello.cpp to produce a default target executable file a.out in present working directory. To run this program, type ./a.out where ./ represents present working directory and a.out is the executable target file.

```
./a.out
```

g++ -S file_name is used to only compile the file_name and not assembling or linking. It will generate a file_name.s assembly source file.

Example:

```
g++ -S hello.cpp
```

g++ -c file_name is used to only compile and assemble the file_name and not link the object code to produce executable file. It will generate a file_name.o object code file in present working directory.

Example:

```
g++ -c hello.cpp
```

g++ -o target_name file_name: Compiles and links file_name and generates executable target file with target_name (or a.out by default).

Example:

```
g++ -o main.exe hello.cpp
```
