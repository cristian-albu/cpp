#include <iostream>
using namespace std;

int main()
{

    unsigned int n, sum{0};
    cin >> n;

    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }

    cout << sum << endl;
    return 0;
}