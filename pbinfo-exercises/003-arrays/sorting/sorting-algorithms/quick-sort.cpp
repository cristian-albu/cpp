#include <iostream>
using namespace std;

int list1[11]{ 2, 5, 1, 7, 11, 3, 10, 9, 6, 4, 8 };
int list2[10]{ 10, 3, 7, 1, 2, 6, 4, 7, 8, 5 };
int list3[10]{ 7, 2, 1, 5, 9, 3, 6, 8, 4, 10 };

void display_array(int len, int v[])
{
    for (int i{ 0 }; i < len; ++i)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}

// Time O(n log n) or O(n^2) if already sorted - Space complexity O(log(n))
void quick_sort(int start, int len, int v[])
{
    if (len - 1 <= start)
        return;

    int i{ start - 1 }, j{ start }, temp;

    while (j < len - 1)
    {
        if (v[j] < v[len - 1])
        {

            ++i;
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
        ++j;
    }

    ++i;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;

    quick_sort(0, i, v);
    quick_sort(i + 1, len, v);
}

int main()
{
    quick_sort(0, 11, list1);
    quick_sort(0, 10, list2);
    quick_sort(0, 10, list3);

    display_array(11, list1);
    display_array(10, list2);
    display_array(10, list3);

    return 0;
}