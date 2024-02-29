#include <fstream>
using namespace std;

ifstream fin("sortare.in");
ofstream fout("sortare.out");

void read_array(int len, long long v[])
{
    for (int i{0}; i < len; ++i)
        fin >> v[i];
}

void display_array(int len, long long v[])
{
    for (int i{0}; i < len; ++i)
        fout << v[i] << " ";

    fout << endl;
}

void quick_sort(int start, int end, long long v[])
{
    if (end <= start)
        return;

    int i{start - 1}, j{start};
    long long temp;

    while (j < end)
    {
        if (v[j] > v[end])
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
    v[i] = v[end];
    v[end] = temp;

    quick_sort(0, i - 1, v);
    quick_sort(i + 1, end, v);
}

int main()
{

    int n;

    fin >> n;
    long long v[n];
    read_array(n, v);

    quick_sort(0, n - 1, v);

    display_array(n, v);
    return 0;
}