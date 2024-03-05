#include <iostream>
using namespace std;

int n, i, j;

int main() {

  cin >> n;

  int v[n];
  for (i = 0; i < n; ++i)
    cin >> v[i];

  for (i = 0; i < n - 1; ++i) {
    for (j = i + 1; j < n; ++j) {
      if (v[i] == v[j]) {
        for (int k = j; k < n; ++k) {
          v[k] = v[k + 1];
        }
        --n;
        --j;
      }
    }
  }

  for (i = 0; i < n; ++i)
    cout << v[i] << " ";

  cout << endl;
  return 0;
}
