#include <iostream>

using namespace std;

int main()
{
    int n, originalNum, reversedNum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    originalNum = n;

    while (n)
    {
        // extract the last digit by using the remainder
        int digit = n % 10;
        // build up the reversed number by shifting its digits one place to the left
        reversedNum = reversedNum * 10 + digit;
        // remove the last digit from n
        n /= 10;
    }

    if (originalNum == reversedNum)
    {
        cout << originalNum << " is a palindrome";
    }
    else
    {
        cout << originalNum << " is not a palindrome";
    }
    return 0;
}