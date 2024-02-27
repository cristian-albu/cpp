#include <iostream>
using namespace std;

int main()
{

    int n;
    bool is_palindrome{true};
    cin >> n;

    int v[n];

    for (int i{0}; i < n; ++i)
    {
        cin >> v[i];
        cout << v[i];
    }

    for (int i{0}, j{n - 1}; i < n / 2; ++i, --j)
    {
        if (v[i] != v[j])
        {
            is_palindrome = false;
        }
    }

    cout << endl;
    if (is_palindrome)
    {
        cout << "DA" << endl;
    }
    else
    {
        cout << "NU" << endl;
    }

    return 0;
}