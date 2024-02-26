#include <iostream>
using namespace std;

int main()
{

    int n;

    long long m;

    cin >> n;

    long long min;

    cin >> m;

    min = m;

    while (n > 1)
    {
        cin >> m;
        if (m < min)
        {
            min = m;
        }

        n--;
    }
    cout << min << endl;
    return 0;
}