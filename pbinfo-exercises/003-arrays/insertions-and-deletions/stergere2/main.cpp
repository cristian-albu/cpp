#include <iostream>
using namespace std;

int n, i, j, min_num;

int main() {
  cin >> n;

  int v[n];

  for (i = 0; i < n; ++i) {
    cin >> v[i];
    if (i == 0)
      min_num = v[i];

    if (v[i] < min_num)
      min_num = v[i];
  }

  for (i = 0; i < n; ++i) {
    if (v[i] == min_num) {
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
  return 0;
}
