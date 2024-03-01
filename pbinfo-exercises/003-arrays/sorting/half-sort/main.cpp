#include <fstream>
using namespace std;

ifstream fin("halfsort.in");
ofstream fout("halfsort.out");

int n;
long long v[101];


void quick_sort(int start, int end, long long arr[], bool asc) {
    if (end <= start) return;

    int i{ start - 1 }, j{ start };

    while (j < end) {
        if (asc ? arr[j] < arr[end] : arr[j] > arr[end]) {
            ++i;
            swap(arr[j], arr[i]);
        }
        ++j;
    }

    ++i;
    swap(arr[i], arr[end]);

    quick_sort(start, i - 1, arr, asc);
    quick_sort(i + 1, end, arr, asc);
}

int main() {

    fin >> n;

    for (int i{ 0 }; i < n; ++i)
        fin >> v[i];

    quick_sort(0, n / 2 - 1, v, true);
    quick_sort(n / 2 - 1 + 1, n - 1, v, false);

    for (int i{ 0 }; i < n; ++i)
        fout << v[i] << " ";

    fout << endl;

    return 0;
}