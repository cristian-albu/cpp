#include <iostream>
using namespace std;

int n, i, first{ 0 }, last{ 0 }, sum;

int main() {
    cin >> n;

    int arr[n];

    for (i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] % 2 != 0) {
            if (first == 0)
                first = i;
            last = i;
        }
    }

    for (i = first; i <= last; ++i)
        sum += arr[i];

    cout << sum << endl;

    return 0;
}