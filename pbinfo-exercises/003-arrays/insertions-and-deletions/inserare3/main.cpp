#include <iostream>
using namespace std;

int n, i, j, min_val;

int main() {
  cin >> n;

  int v[n * 2];
  for (i = 0; i < n; ++i) {
    cin >> v[i];
    if (i == 0 || v[i] < min_val)
      min_val = v[i];
  }

  for (i = 0; i < n; ++i)
    if (v[i] == min_val) {
      for (j = n - 1; j > i; --j)
        v[j + 1] = v[j];
      v[i + 1] = min_val;
      ++i;
      ++n;
    }

  for (i = 0; i < n; ++i)
    cout << v[i] << " ";

  cout << endl;
}
