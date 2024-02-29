#include <iostream>
#include <cmath>
using namespace std;

int n, temp, m{0};
int v[1001];

void quick_sort(int start, int end, int arr[])
{
    if (end <= start)
        return;

    int i{start - 1}, j{start};

    while (j < end)
    {
        if (arr[j] < arr[end])
        {
            ++i;
            swap(arr[j], arr[i]);
        }
        ++j;
    }
    ++i;
    swap(arr[end], arr[i]);

    quick_sort(start, i - 1, arr);
    quick_sort(i + 1, end, arr);
}

bool is_prime(int num)
{
    if (num == 2)
        return true;

    if (num % 2 == 0 || num == 0 || num == 1)
        return false;

    for (int i{3}; i <= sqrt(num); i += 2)
        if (num % i == 0)
            return false;

    return true;
}

int main()
{
    cin >> n;

    for (int i{0}; i < n; ++i)
    {
        cin >> temp;
        if (is_prime(temp))
        {
            v[m] = temp;
            ++m;
        }
    }

    quick_sort(0, m - 1, v);

    for (int i{0}; i < m; ++i)
        cout << v[i] << " ";

    cout << endl;
    return 0;
}