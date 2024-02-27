#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, prime_index{-1};

    cin >> n;

    int v[n];

    for (int i{0}; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i{0}; i < n; ++i)
    {
        bool is_prime{true};
        if (v[i] % 2 == 0 && v[i] != 2)
        {
            is_prime = false;
        }
        else
        {
            for (int j{3}; j <= sqrt(v[i]); j += 2)
            {
                if (v[i] % j == 0)
                {
                    is_prime = false;
                    break;
                }
            }
        }

        if (is_prime)
        {
            prime_index = i;
        }
    }

    for (int i{0}; i < n; ++i)
    {
        if (prime_index > 0)
        {
            v[prime_index] = 0;
        }

        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}