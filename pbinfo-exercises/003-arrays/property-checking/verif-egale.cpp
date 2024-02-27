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

        if (i > 0 && v[i - 1] != v[i])
        {
            cout << "NU" << endl;
            return 0;
        }
    }
    cout << "DA" << endl;
    return 0;
}