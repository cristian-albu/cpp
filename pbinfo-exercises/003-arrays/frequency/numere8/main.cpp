#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere8.in");
ofstream fout("numere8.out");

int i;
int arr[10000] = { 0 };

int main() {
    while (fin >> i)
        if (i < 10000)
            arr[i]++;

    for (i = 9999; i > 0; --i)
        if (arr[i] == 0)
            fout << i << " ";

    fout << endl;
    return 0;
}