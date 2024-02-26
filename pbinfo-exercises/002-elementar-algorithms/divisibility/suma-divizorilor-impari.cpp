#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    long long n, s{0};

    cin >> n;

    for (long long i{1}, j{0}; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            j = n / i;
            if (i % 2 != 0)
            {
                s += i;
            }

            if (i != j && j % 2 != 0)
            {
                s += j;
            }
        }
    }

    cout << s << endl;
    return 0;
}