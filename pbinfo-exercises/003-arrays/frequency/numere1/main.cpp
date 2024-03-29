#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere1.in");

int n, i, j, a{ 0 }, b{ 0 };

int main() {
    int arr[1000] = { 0 };
    fin >> n;

    for (i = 0; i < n; ++i) {
        fin >> j;
        if (j < 1000 && j > 99)
            arr[j]++;
    }


    for (i = 999; i > 99; --i) {
        if (a == 0 && arr[i] == 0) {
            a = i;
            --i;
        }

        if (a != 0 && arr[i] == 0) {
            b = i;
            break;
        }
    }

    if (a != 0 && b != 0)
        cout << b << " " << a << endl;
    else
        cout << "NU EXISTA" << endl;


    return 0;
}