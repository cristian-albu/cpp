#include <iostream>
using namespace std;

int n, i, j;
int v[1001];

bool is_prime(int num) {
  if (num == 2)
    return true;
  if (num == 1 || num % 2 == 0)
    return false;

  for (int i{3}; i * i <= num; i += 2)
    if (num % i == 0)
      return false;

  return true;
}

int main() {

  cin >> n;

  for (i = 0; i < n; ++i)
    cin >> v[i];

  for (i = 0; i < n; ++i) {
    if (is_prime(v[i])) {
      for (j = i; j < n; ++j)
        v[j] = v[j + 1];
      --n;
      --i;
    }
  }

  for (i = 0; i < n; ++i)
    cout << v[i] << " ";

  cout << endl;
  return 0;
}
