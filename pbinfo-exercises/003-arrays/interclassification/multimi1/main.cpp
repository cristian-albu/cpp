#include <iostream>
using namespace std;

long long n, m, i, j;

int main() {
  cin >> n;
  long long a[n];
  for (i = 0; i < n; ++i)
    cin >> a[i];

  cin >> m;
  long long b[m];
  for (i = 0; i < m; ++i)
    cin >> b[i];

  long long c_len{n + m}, d_len{n > m ? m : n}, k{0}, l{0};
  long long c[c_len], d[d_len];
  i = 0;
  j = 0;

  while (i < n && j < m) {
    if (a[i] < b[j]) {
      c[k] = a[i];
      ++i;
    } else if (a[i] == b[j]) {
      c[k] = a[i];
      d[l] = a[i];
      ++i;
      ++j;
      ++l;
      --c_len;
    } else {
      c[k] = b[j];
      ++j;
    }
    ++k;
  }

  while (i < n) {
    c[k] = a[i];
    ++i;
    ++k;
  }

  while (j < m) {
    c[k] = b[j];
    ++j;
    ++k;
  }

  for (i = 0; i < c_len; ++i)
    cout << c[i] << " ";
  cout << endl;

  for (i = 0; i < l; ++i)
    cout << d[i] << " ";
  cout << endl;

  return 0;
}
