#include <iostream>
using namespace std;

int n, x, p, i;

int main() {
  cin >> n;
  cin >> x;
  cin >> p;

  int v[n + 2];
  for (i = 1; i < n + 1; ++i)
    cin >> v[i];

  for (i = n + 1; i > p; --i)
    v[i] = v[i - 1];

  v[p] = x;

  for (i = 1; i < n + 2; ++i)
    cout << v[i] << " ";

  cout << endl;
  return 0;
}
