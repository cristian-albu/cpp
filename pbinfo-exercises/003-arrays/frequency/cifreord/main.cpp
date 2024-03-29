#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("cifreord.in");
ofstream fout("cifreord.out");

int i, n, j;

int main() {

    fin >> n;

    int fr[10] = { 0 };

    for (i = 0; i < n; ++i) {
        fin >> j;
        fr[j]++;
    }

    j = 0;
    for (int i = 0; i < 10; ++i) {
        while (fr[i] > 0) {
            cout << i << " ";
            fr[i]--;
            j++;
            if (j % 20 == 0 || j == n)
                cout << endl;
        }
    }
    return 0;
}