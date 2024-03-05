#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("interclasare.in");
ofstream fout("interclasare.out");

int i, j, k{0}, n, m;

int main() {
  fin >> n;
  int arr1[n];

  for (i = 0; i < n; ++i)
    fin >> arr1[i];

  fin >> m;
  int arr2[m];

  for (i = 0; i < m; ++i)
    fin >> arr2[i];

  int arr3[n + m];

  i = 0;
  j = 0;
  while (i < n && j < m) {
    if (arr1[i] < arr2[j]) {
      arr3[k] = arr1[i];
      ++i;
      ++k;
    } else {
      arr3[k] = arr2[j];
      ++j;
      ++k;
    }
  }

  while (i < n) {
    arr3[k] = arr1[i];
    ++i;
    ++k;
  }

  while (j < m) {
    arr3[k] = arr2[j];
    ++j;
    ++k;
  }

  for (i = 0, j = 1; i < k; ++i, ++j) {
    cout << arr3[i] << " ";
    if (j % 10 == 0 || i == k - 1)
      cout << endl;
  }
}
