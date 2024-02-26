#include <iostream>
using namespace std;

int main()
{

    unsigned int n, m, min, max;

    cin >> n;

    cin >> m;
    min = m;
    max = m;

    while (n > 1)
    {
        cin >> m;

        if (m > max)
        {
            max = m;
        }

        if (m < min)
        {
            min = m;
        }
        n--;
    }

    cout << min + max << endl;
    return 0;
}