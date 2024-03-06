#include <iostream>
using namespace std;

int n, i, j;

int main() {
  cin >> n;

  int v[n];

  for (i = 0; i < n; ++i)
    cin >> v[i];

  for (i = 0; i < n; ++i) {
    if (v[i] % 2 == 0) {
      for (j = i; j < n - 1; ++j) {
        v[j] = v[j + 1];
      }
      --i;
      --n;
    }
  }

  for (i = 0; i < n; ++i)
    cout << v[i] << " ";

  cout << endl;
}
