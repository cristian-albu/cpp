#include <iostream>
using namespace std;

int n, p, i;
int v[1500];

int main() {

  cin >> n;
  cin >> p;

  for (i = 0; i < n; ++i)
    cin >> v[i];

  for (i = p - 1; i < n; ++i)
    v[i] = v[i + 1];

  for (i = 0; i < n - 1; ++i)
    cout << v[i] << " ";

  cout << endl;
}
