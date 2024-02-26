#include <iostream>
using namespace std;

int main()
{

    unsigned int n;
    long long s{0};

    cin >> n;

    for (unsigned int i{1}, y{n}; i <= n; ++i, --y)
    {
        s += i * y;
    }

    cout << "Rezultatul este " << s << endl;
    return 0;
}