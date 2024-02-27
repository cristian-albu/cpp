#include <iostream>
using namespace std;

int main()
{

    int n;
    bool same{false};
    cin >> n;

    int v[n];

    for (int i{0}; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i{0}; i < n - 1; ++i)
    {

        for (int j{i + 1}; j < n; ++j)
        {

            if (v[i] == v[j])
            {
                same = true;
            }
        }
    }

    if (same)
    {
        cout << "NU" << endl;
    }
    else
    {
        cout << "DA" << endl;
    }

    return 0;
}