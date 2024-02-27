#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int v[n];

    for (int i{0}; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i{0}; i < n; ++i)
    {

        bool isPrime{true};

        if (v[i] % 2 == 0 && v[i] != 2)
        {
            isPrime = false;
        }
        else
        {
            for (int j{3}; j <= sqrt(v[i]); j += 2)
            {
                if (v[i] % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
        {
            v[i] = 0;
        }

        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}