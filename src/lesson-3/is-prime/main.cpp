#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Check if a number is prime? ";

    int n;

    cin >> n;

    if (n > 0 && n <= 3)
    {
        cout << n << " is prime";
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not prime";
            return 0;
        }
    }

    cout << n << " is prime";
    return 0;
}