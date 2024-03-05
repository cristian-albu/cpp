#include <iostream>
using namespace std;

int n, i, j;

int main() {
  cin >> n;

  int v[n * 2];

  for (i = 0; i < n; ++i)
    cin >> v[i];

  for (i = 0; i < n; ++i) {
    if (v[i] % 2 == 0) {
      ++n;
      for (j = n - 1; j > i; --j) {
        v[j] = v[j - 1];
      }
      v[i + 1] = v[i] * 2;
      ++i;
    }
  }

  for (i = 0; i < n; ++i)
    cout << v[i] << " ";

  cout << endl;

  return 0;
}
