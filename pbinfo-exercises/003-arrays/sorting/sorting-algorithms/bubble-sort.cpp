#include <iostream>
using namespace std;

int list1[10]{2, 5, 1, 7, 3, 10, 9, 6, 4, 8};
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

// Quadratic time O(n^2)
void bubble_sort(int n, int v[])
{

    for (int i{0}; i < n - 1; ++i)
    {
        for (int j{0}; j < n - i - 1; ++j)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main()
{

    bubble_sort(10, list1);
    bubble_sort(10, list2);
    bubble_sort(10, list3);

    display_array(10, list1);
    display_array(10, list2);
    display_array(10, list3);

    return 0;
}