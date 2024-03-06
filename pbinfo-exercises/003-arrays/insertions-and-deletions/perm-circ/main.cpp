#include <iostream>
using namespace std;

int n, i, j;

int main() {
  cin >> n;

  int v[n];

  for (i = 0; i < n; ++i)
    cin >> v[i];

  for (i = 0; i < n; ++i) {
    for (j = 0; j < n; ++j)
      cout << v[j] << " ";
    cout << endl;

    int temp = v[0];
    for (j = 0; j < n - 1; ++j) {
      v[j] = v[j + 1];
    }
    v[n - 1] = temp;
  }

  return 0;
}
