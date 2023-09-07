#include <iostream>

using namespace std;

int main()
{
    cout << "Enter an integer: ";
    int n, total = 0;

    cin >> n;

    if (n == 0)
    {
        cout << "Number is 0";
        return 0;
    }
    while (n)
    {
        int digit = n % 10;
        total += digit;
        n /= 10;
    }

    cout << total;

    return 0;
}