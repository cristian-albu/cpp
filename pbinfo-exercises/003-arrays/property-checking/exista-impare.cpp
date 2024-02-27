#include <iostream>
using namespace std;

int main()
{

    int n;
    bool odd_exists{false};

    cin >> n;

    int v[n];

    for (int i{0}; i < n; ++i)
    {
        cin >> v[i];

        if (v[i] % 2 != 0)
        {
            odd_exists = true;
        }
    }

    if (odd_exists)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }

    return 0;
}