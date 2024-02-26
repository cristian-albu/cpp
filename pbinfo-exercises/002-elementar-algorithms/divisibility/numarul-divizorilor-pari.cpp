#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, c{0};

    cin >> n;

    for (long long i{1}, j{0}; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {

            j = n / i;

            if (i % 2 == 0)
            {
                c++;
            }

            if (i != j && j % 2 == 0)
            {
                c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}