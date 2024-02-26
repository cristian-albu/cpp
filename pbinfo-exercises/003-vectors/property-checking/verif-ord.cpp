#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int res[n];

    for (int i{0}; i < n; ++i)
    {
        int m;
        int ordered{1};
        cin >> m;

        int v[m];

        for (int j{0}; j < m; ++j)
        {
            cin >> v[j];

            if (ordered != 0 && j != 0 && v[j - 1] > v[j])
            {
                ordered = 0;
            }
        }

        res[i] = ordered;
    }

    for (int i{0}; i < n; ++i)
    {
        cout << res[i] << " ";
    }

    cout << endl;

    return 0;
}