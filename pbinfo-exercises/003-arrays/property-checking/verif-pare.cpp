#include <iostream>
using namespace std;

int main()
{
    int n;
    bool are_even{true};

    cin >> n;

    int v[n];

    for (int i{0}; i < n; ++i)
    {
        cin >> v[i];

        if (v[i] % 2 != 0)
        {
            are_even = false;
        }
    }

    if (are_even)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }

    return 0;
}