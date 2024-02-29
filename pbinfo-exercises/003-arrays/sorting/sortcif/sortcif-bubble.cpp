#include <fstream>

using namespace std;

ifstream fin("sortcif.in");
ofstream fout("sortcif.out");

int i, j, n, v[1001], s[1001];

int main()
{
    fin >> n;
    for (i = 1; i <= n; i++)
    {
        fin >> v[i];
        int x = v[i];

        while (x)
        {
            s[i] = s[i] + x % 10;
            x = x / 10;
        }
    }

    for (i = 1; i <= n; i++)
        for (j = i + 1; j <= n; j++)
            if (s[i] > s[j])
            {
                swap(v[i], v[j]);
                swap(s[i], s[j]);
            }

    for (i = 1; i <= n; i++)
        fout << v[i] << " ";
}