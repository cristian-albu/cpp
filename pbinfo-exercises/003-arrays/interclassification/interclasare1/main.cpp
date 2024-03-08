#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("interclasare1.in");
ofstream fout("interclasare1.out");

void merge(int len, int arr[], int l_len, int l_arr[], int r_len, int r_arr[]) {
  int r{0}, l{0}, i{0};

  while (l < l_len && r < r_len) {
    if (l_arr[l] < r_arr[r]) {
      arr[i] = l_arr[l];
      ++l;
    } else if (l_arr[l] > r_arr[r]) {
      arr[i] = r_arr[r];
      ++r;
    } else {
      arr[i] = l_arr[l];
      ++l;
      ++r;
      --len;
    }
    ++i;
  }

  while (l < l_len) {
    arr[i] = l_arr[l];
    ++i;
    ++l;
  }

  while (r < r_len) {
    arr[i] = r_arr[r];
    ++i;
    ++r;
  }

  for (i = 0; i < len; ++i) {
    cout << arr[i] << " ";
    if ((i + 1) % 10 == 0 || i == len - 1)
      cout << endl;
  }
}

int main() {
  int n, m, i;

  fin >> n;
  int v1[n];
  for (i = 0; i < n; ++i)
    fin >> v1[i];

  fin >> m;
  int v2[m];
  for (i = 0; i < m; ++i)
    fin >> v2[i];

  int v3_len{n + m};
  int v3[v3_len];
  merge(v3_len, v3, n, v1, m, v2);

  return 0;
}
