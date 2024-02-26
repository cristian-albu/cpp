#include <iostream>
using namespace std;

int main()
{

    unsigned int n;
    long long p{1};
    bool has_odd{false};

    cin >> n;

    while (n > 0)
    {
        unsigned int last_digit = n % 10;
        if (last_digit % 2 != 0)
        {
            has_odd = true;
            p *= last_digit;
        }
        n = n / 10;
    }

    if (has_odd)
    {
        cout << p << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}