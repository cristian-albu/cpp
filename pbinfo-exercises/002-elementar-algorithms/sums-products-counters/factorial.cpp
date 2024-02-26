#include <iostream>
using namespace std;

// 0 ≤ n ≤ 15

int main()
{

    long long n, p{1};

    cin >> n;

    for (unsigned int i{1}; i <= n; ++i)
    {
        p *= i;
    }
    cout << p << endl;
    return 0;
}
