#include <iostream>
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
        if (i % 2 != 0)
        {
            cout << v[i] << " ";
        }
    }

    cout << endl;

    for (int i{n - 1}; i >= 0; --i)
    {
        if (i % 2 == 0)
        {
            cout << v[i] << " ";
        }
    }

    cout << endl;
    return 0;
}