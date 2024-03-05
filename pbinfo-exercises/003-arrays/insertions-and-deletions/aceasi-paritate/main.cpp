#include <iostream>
using namespace std;

int n, i, j, k;

int main() {
  cin >> n;

  int v[200];
  for (i = 0; i < n; ++i)
    cin >> v[i];

  for (i = 0, j = 1; j < n; ++i, ++j) {
    if ((v[i] % 2 == 0 && v[j] % 2 == 0) || (v[i] % 2 != 0 && v[j] % 2 != 0)) {
      ++n;
      for (k = n - 1; k >= j; --k) {
        v[k] = v[k - 1];
      }
      ++i;
      ++j;
      v[i] = (v[i] + v[j]) / 2;
    }
  }

  for (i = 0; i < n; ++i)
    cout << v[i] << " ";
  cout << endl;
  return 0;
}
