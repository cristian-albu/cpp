#include <fstream>
using namespace std;

ifstream fin("sortcif.in");
ofstream fout("sortcif.out");

void quick_sort_on_digit_sum(int start, int end, int v[], int sums[])
{
    if (end <= start)
        return;

    int i{start - 1}, j{start};

    while (j < end)
    {
        if (sums[j] < sums[end])
        {
            ++i;
            swap(v[i], v[j]);
            swap(sums[i], sums[j]);
        }
        ++j;
    }

    ++i;

    swap(v[i], v[j]);
    swap(sums[i], sums[j]);

    quick_sort_on_digit_sum(0, i - 1, v, sums);
    quick_sort_on_digit_sum(i + 1, end, v, sums);
}

int main()
{
    int n;
    fin >> n;
    int v[n], sums[n];

    for (int i{0}; i < n; ++i)
    {
        fin >> v[i];
        int curr{v[i]}, sum{0};
        while (curr != 0)
        {
            sum += curr % 10;
            curr /= 10;
        }
        sums[i] = sum;
    }

    quick_sort_on_digit_sum(0, n - 1, v, sums);

    for (int i{0}; i < n; ++i)
        fout << v[i] << " ";

    fout << endl;

    return 0;
}