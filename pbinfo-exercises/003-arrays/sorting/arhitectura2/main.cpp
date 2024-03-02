#include <fstream>
using namespace std;

ifstream fin("arhitectura2.in");
ofstream fout("arhitectura2.out");

int n, i;

void quick_sort(int start, int end, int arr[]) {
    if (end <= start) return;

    int i{ start - 1 }, j{ start };

    while (j < end) {
        if (arr[j] > arr[end]) {
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
    fin >> n;

    int v[n];

    for (i = 0; i < n; ++i)
        fin >> v[i];

    quick_sort(0, n - 1, v);



    for (i = 0; i < n; ++i)
        fout << v[i] << " ";

    fout << "\n";

    for (i = 0; i < n; ++i)
        v[i] == (v[i - 1] + v[i + 1]) / 2 ? fout << "1 " : fout << "0 ";

    return 0;
}