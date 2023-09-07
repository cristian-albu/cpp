# Lesson 3: Basic program structure and control flow

## if-else Statement:

In this example, we use the if-else statement to check if age is greater than or equal to 18, and based on the condition, we print different messages.

```cpp
#include <iostream>

int main() {
    int age = 25;

    if (age >= 18) {
        std::cout << "You are an adult." << std::endl;
    } else {
        std::cout << "You are not yet an adult." << std::endl;
    }

    return 0;
}

```

## for Loop::

Here, we use a for loop to iterate from 1 to 5, and in each iteration, we print a message.

```cpp
#include <iostream>

int main() {
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Iteration " << i << std::endl;
    }

    return 0;
}

```

## while Loop::

This code demonstrates a while loop that continues to execute as long as count is less than or equal to 5, printing the current count in each iteration.

```cpp
#include <iostream>

int main() {
    int count = 1;

    while (count <= 5) {
        std::cout << "Count: " << count << std::endl;
        count++;
    }

    return 0;
}


```

## do-while Loop:::

In this example, we use a do-while loop to ensure that the loop body is executed at least once, and then it continues as long as num is less than or equal to 5. The current number is printed in each iteration.

```cpp
#include <iostream>

int main() {
    int num = 1;

    do {
        std::cout << "Number: " << num << std::endl;
        num++;
    } while (num <= 5);

    return 0;
}


```
