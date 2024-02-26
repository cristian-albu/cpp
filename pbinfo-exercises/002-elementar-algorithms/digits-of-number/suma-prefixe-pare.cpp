#include <iostream>
using namespace std;

int main()
{

    long long n, s{0};

    cin >> n;

    while (n > 0)
    {

        if (n % 2 == 0)
        {
            s += n;
        }
        n = n / 10;
    }
    cout << s << endl;
    return 0;
}