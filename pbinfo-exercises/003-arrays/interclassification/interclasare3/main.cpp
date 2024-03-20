#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("interclasare3.in");
ofstream fout("interclasare3.out");

long long n, m, i, j;

int main() {

  fin >> n;
  fin >> m;
  long long a[n];
  long long b[m];
  for (i = 0; i < n; ++i)
    fin >> a[i];

  for (i = m - 1; i >= 0; --i)
    fin >> b[i];

  long long len = n + m;
  long long c[len];
  i = 0;
  j = 0;
  long long k = 0;
  while (i < n && j < m) {
    if (a[i] <= b[j]) {
      if (a[i] % 2 == 0) {
        c[k] = a[i];
        ++k;
      } else {
        --len;
      }
      ++i;
    } else {
      if (b[j] % 2 == 0) {
        c[k] = b[j];
        ++k;
      } else {
        --len;
      }
      ++j;
    }
  }

  while (i < n) {
    if (a[i] % 2 == 0) {
      c[k] = a[i];
      ++k;
    } else {
      --len;
    }
    ++i;
  }

  while (j < m) {
    if (b[j] % 2 == 0) {
      c[k] = b[j];
      ++k;
    } else {
      --len;
    }
    ++j;
  }

  for (i = 0; i < len; ++i) {
    fout << c[i] << " ";
    if (i == len - 1 || (i + 1) % 20 == 0) {
      fout << endl;
    }
  }

  return 0;
}
