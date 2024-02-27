#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, odd{0}, even{0};

    cin >> n;

    int v[n];

    for (int i{0}; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i{0}; i < n; ++i)
    {
        if (v[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << abs(even - odd) << endl;

    return 0;
}