#include <iostream>
using namespace std;

int n, i;

void insert_med(int len, long long arr[], bool should_stop) {
  should_stop = true;
  int new_len = len;

  for (i = 0; i < len; ++i)
    cout << arr[i] << " ";

  cout << endl;

  for (i = 0; i < new_len - 1; ++i)
    if (((arr[i] % 2 == 0 && arr[i + 1] % 2 == 0) ||
         (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0)) &&
        arr[i] != arr[i + 1]) {
      ++new_len;
      for (int j = new_len - 1; j > i + 1; --j) {
        arr[j] = arr[j - 1];
      }
      arr[i + 1] = (arr[i] + arr[i + 1]) / 2;
      ++i;
      should_stop = false;
    }

  if (should_stop)
    return;

  insert_med(new_len, arr, should_stop);
}

int main() {
  cin >> n;

  long long v[1001];
  for (i = 0; i < n; ++i)
    cin >> v[i];

  insert_med(n, v, false);

  return 0;
}
