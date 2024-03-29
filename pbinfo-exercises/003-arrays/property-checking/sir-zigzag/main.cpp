#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sir.in");

int i, len;

int main() {
    fin >> len;

    int arr[len];

    for (i = 0; i < len; ++i)
        fin >> arr[i];

    bool is_zigzag = true;
    bool starts_low = false;

    if (arr[0] > arr[1])
        starts_low = false;
    else
        starts_low = true;

    for (i = 0; i < len - 1; ++i) {
        if (starts_low) {
            if (i % 2 == 0) {
                if (arr[i] >= arr[i + 1]) {
                    is_zigzag = false;
                }
            }
            else {
                if (arr[i] <= arr[i + 1]) {
                    is_zigzag = false;
                }
            }
        }
        else {
            if (i % 2 == 0) {
                if (arr[i] <= arr[i + 1]) {
                    is_zigzag = false;
                }
            }
            else {
                if (arr[i] >= arr[i + 1]) {
                    is_zigzag = false;
                }
            }
        }
    }

    if (is_zigzag)
        cout << "DA" << endl;
    else
        cout << "NU" << endl;

    return 0;
}