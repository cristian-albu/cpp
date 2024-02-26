#include <iostream>
using namespace std;

int main()
{

    unsigned int n;
    long long s{0};

    cin >> n;

    for (unsigned int i{1}; i <= n; ++i)
    {
        s += i * (i + 1);
    }

    cout << "Rezultatul este " << s << endl;
    return 0;
}