#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("interclasare1.in");
ofstream fout("interclasare1.out");

int n, m, i;
int main() {

  fin >> n;

  int arr1[n];
  for (i = 0; i < n; ++i)
    fin >> arr1[i];

  fin >> m;

  int arr2[m];
  for (i = 0; i < m; ++i)
    fin >> arr2[i];

  int j{n + m};
  int arr3[j];
  int l{0}, r{0};
  i = 0;

  while (l < n && r < m) {
    if (arr1[l] < arr2[r]) {
      arr3[i] = arr1[l];
      ++l;
    } else if (arr1[l] > arr2[r]) {
      arr3[i] = arr2[r];
      ++r;
    } else {
      arr3[i] = arr1[l];
      ++r;
      ++l;
      --j;
    }
    ++i;
  }

  while (l < n) {
    arr3[i] = arr1[l];
    ++l;
    ++i;
  }

  while (r < m) {
    arr3[i] = arr2[r];
    ++r;
    ++i;
  }

  for (i = 0; i < j; ++i) {
    fout << arr3[i] << " ";

    if ((i + 1) % 10 == 0 || i == j - 1)
      fout << endl;
  }

  return 0;
}
