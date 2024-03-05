#include <cmath>
#include <iostream>
using namespace std;

int n, i, j, temp;

int main() {
  cin >> n;

  int v[n * 2];

  for (i = 0; i < n; ++i)
    cin >> v[i];

  for (i = 0; i < n; ++i) {
    temp = sqrt(v[i]);
    if (temp * temp == v[i]) {
      ++n;
      for (j = n - 1; j > i; --j) {
        v[j] = v[j - 1];
      }
      v[i] = temp;
      ++i;
    }
  }

  for (i = 0; i < n; ++i)
    cout << v[i] << " ";

  cout << endl;

  return 0;
}
