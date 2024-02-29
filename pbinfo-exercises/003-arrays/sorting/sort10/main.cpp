#include <iostream>
using namespace std;

int n, temp, m{0};
int v[1001];

int main()
{
    cin >> n;

    for (int i{0}; i < n; ++i)
    {
        cin >> temp;
        if (temp % 10 == 0)
        {
            v[m] = temp;
            ++m;
        }
    }

    for (int i{0}; i < m - 1; ++i)
        for (int j{i}; j < m; ++j)
            if (v[i] < v[j])
                swap(v[i], v[j]);

    if (m > 0)
        for (int i{0}; i < m; ++i)
            cout << v[i] << " ";
    else
        cout << "NU EXISTA";

    cout << endl;
    return 0;
}