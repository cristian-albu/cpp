#include <iostream>
using namespace std;

int n, min_i{ 0 }, max_i{ 0 };
int v[1001];

void quick_sort(int start, int end, int arr[]) {
    if (end <= start) return;

    int i{ start - 1 }, j{ start };

    while (j < end) {
        if (arr[j] < arr[end]) {
            ++i;
            swap(arr[j], arr[i]);
        }
        ++j;
    }
    ++i;
    swap(arr[i], arr[end]);

    quick_sort(start, i - 1, arr);
    quick_sort(i + 1, end, arr);
}

int main() {

    cin >> n;

    for (int i{ 0 }; i < n; ++i) {
        cin >> v[i];
        if (v[i] > v[max_i]) max_i = i;
        if (v[i] < v[min_i]) min_i = i;
    }

    if (min_i > max_i)
        quick_sort(max_i, min_i, v);
    else
        quick_sort(min_i, max_i, v);

    for (int i{ 0 }; i < n; ++i) cout << v[i] << " ";


    cout << endl;

    return 0;
}