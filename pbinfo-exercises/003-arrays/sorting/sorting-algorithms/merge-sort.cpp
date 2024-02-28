#include <iostream>
using namespace std;

int list1[11]{2, 5, 1, 7, 11, 3, 10, 9, 6, 4, 8};
int list2[10]{10, 3, 7, 1, 2, 6, 4, 7, 8, 5};
int list3[10]{7, 2, 1, 5, 9, 3, 6, 8, 4, 10};

void display_array(int n, int v[])
{
    for (int i{0}; i < n; ++i)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}

void merge(int n, int v[], int l_length, int left[], int r_length, int right[])
{
    int i{0}, l{0}, r{0};
    while (l < l_length && r < r_length)
    {
        if (left[l] < right[r])
        {
            v[i] = left[l];
            ++i;
            ++l;
        }
        else
        {
            v[i] = right[r];
            ++i;
            ++r;
        }
    }

    while (l < l_length)
    {
        v[i] = left[l];
        ++i;
        ++l;
    }

    while (r < r_length)
    {
        v[i] = right[r];
        ++i;
        ++r;
    }
}
// Quasilinear time O(n log n) and Linear span O(n)
void merge_sort(int n, int v[])

{
    if (n <= 1)
        return;
    int l_length{n / 2}, r_length{n - l_length};

    int left[l_length];
    int right[r_length];

    for (int i{0}, j{0}; i < n; ++i)
    {
        if (i < l_length)
        {
            left[i] = v[i];
        }
        else
        {
            right[j] = v[i];
            ++j;
        }
    }

    merge_sort(l_length, left);
    merge_sort(r_length, right);
    merge(n, v, l_length, left, r_length, right);
}

int main()
{

    merge_sort(11, list1);
    merge_sort(10, list2);
    merge_sort(10, list3);

    display_array(11, list1);
    display_array(10, list2);
    display_array(10, list3);

    return 0;
}