#include <iostream>
using namespace std;

int i, n, m, val;

int binary_search(int start, int end, int arr[], int target) {
    if (end >= start) {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
            return 1;
        if (target > arr[mid])
            return binary_search(mid + 1, end, arr, target);
        return binary_search(start, mid - 1, arr, target);
    }
    return 0;
}

int main() {
    cin >> n;
    int arr[n];
    for (i = 0; i < n; ++i)
        cin >> arr[i];

    cin >> m;
    for (i = 0; i < m; ++i) {
        cin >> val;
        cout << binary_search(0, n - 1, arr, val) << " ";
    }

    cout << endl;
    return 0;
}