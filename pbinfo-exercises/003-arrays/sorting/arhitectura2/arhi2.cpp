#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("arhitectura2.in");
ofstream fout("arhitectura2.out");

int f[100001], i, x, hmax, a, b, v[100001];
long long n;

int main()
{
    fin >> n;
    for (i = 1;i <= n;i++)
    {
        fin >> x;
        f[x]++;
        if (x > hmax) hmax = x;
    }
    n = 0;
    for (i = hmax;i >= 1;i--)
        while (f[i] != 0)
        {

            v[++n] = i;
            fout << i << " ";
            f[i]--;
        }
    fout << endl;
    for (i = 1;i <= n;i++)
        v[i] == (v[i - 1] + v[i + 1]) / 2 ? fout << 1 << " " : fout << 0 << " ";

    return 0;
}
