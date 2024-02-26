#include <iostream>
using namespace std;

int main()
{

    int n, m;

    cin >> n;

    long long max;

    cin >> m;

    max = m;

    while (n > 1)
    {

        cin >> m;

        if (m > max)
        {
            max = m;
        }
        n--;
    }

    cout << max << endl;
    return 0;
}