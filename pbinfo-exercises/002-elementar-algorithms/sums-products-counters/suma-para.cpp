#include <iostream>
using namespace std;

int main()
{

    unsigned int n, s{0};

    cin >> n;

    for (unsigned int i{2}; i <= 2 * n; i += 2)
    {
        s += i;
    }

    cout << "Suma este " << s << endl;
    return 0;
}