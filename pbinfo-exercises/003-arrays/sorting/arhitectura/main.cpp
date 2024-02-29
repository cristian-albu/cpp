#include <iostream>
using namespace std;

int n;
int v[1001];

void quick_sort(int start, int end, int arr[])
{
    if (end <= start)
        return;

    int i{start - 1}, j{start};

    while (j < end)
    {
        if (arr[j] > arr[end])
        {
            ++i;
            swap(arr[i], arr[j]);
        }
        ++j;
    }
    ++i;
    swap(arr[i], arr[end]);

    quick_sort(start, i - 1, arr);
    quick_sort(i + 1, end, arr);
}

int main()
{
    cin >> n;

    for (int i{0}; i < n; ++i)
        cin >> v[i];

    quick_sort(0, n - 1, v);

    for (int i{0}; i < n; ++i)
        cout << v[i] << " ";

    cout << endl;

    return 0;
}