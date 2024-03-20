#include <fstream>
using namespace std;

ifstream fin("interclasare2.in");
ofstream fout("interclasare2.out");

long long n, m, i, j, k;

int main() {

  fin >> n;
  int a[n];
  for (i = 0; i < n; ++i)
    fin >> a[i];

  fin >> m;
  int b[m];
  for (i = 0; i < m; ++i)
    fin >> b[i];

  int len = n > m ? n : m;
  int c[len];

  i = 0;
  j = 0;
  k = 0;
  while (i < n) {
    while (j < m) {
      if (a[i] < b[j])
        break;

      if (a[i] == b[j]) {
        c[k] = a[i];
        ++k;
        break;
      }

      if (a[i] > b[j])
        ++j;
    }
    ++i;
  }

  for (i = 0; i < k; ++i) {
    fout << c[i] << " ";
    if (i == k - 1 || (i + 1) % 10 == 0)
      fout << endl;
  }

  return 0;
}
