#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("maxcif.in");
ofstream fout("maxcif.out");

int i{ 0 }, x, highest{ 0 };

int main() {

    int arr[10] = { 0 };
    while (fin >> x) {
        arr[x]++;
        if (arr[x] > highest)
            highest = arr[x];
    }

    for (i = 0; i < 10; ++i)
        if (arr[i] == highest)
            cout << i << " ";

    cout << endl;
    return 0;
}