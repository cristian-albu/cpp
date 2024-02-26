#include <iostream>
using namespace std;

int main()
{

    int n, min{1000001};

    cin >> n;

    while (n != 0)
    {
        if (n < min && n > 0)
        {
            min = n;
        }

        cin >> n;
    }

    if (min == 1000001)
    {
        cout << "NU EXISTA" << endl;
    }
    else
    {
        cout << min << endl;
    }

    return 0;
}