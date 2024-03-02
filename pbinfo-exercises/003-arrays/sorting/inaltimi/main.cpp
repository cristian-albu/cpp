#include <iostream>
using namespace std;

int n;
int v[1001];
int index_v[1001];

int main()
{
    cin >> n;

    for (int i{ 0 }; i < n; ++i) {
        cin >> v[i];
        index_v[i] = i + 1;
    }


    for (int i{ 0 }; i < n - 1; ++i)
        for (int j{ i + 1 }; j < n; j++)
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
                swap(index_v[i], index_v[j]);
            }

    for (int i{ 0 }; i < n; ++i)
        cout << index_v[i] << " ";

    cout << endl;
    return 0;
}