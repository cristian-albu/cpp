#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("f.in");

int i, j, val, p_len, r_len;


int binary_search_closest(int arr[], int start, int end, int target) {
    if (end >= start) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
            return mid;

        if (target > arr[mid])
            return binary_search_closest(arr, start, mid - 1, target);

        return binary_search_closest(arr, mid + 1, end, target);
    }
    return start;
}

int main() {
    fin >> p_len;
    int players[p_len];

    fin >> players[0];
    for (i = 1, j = 1; i < p_len; ++i) {
        fin >> val;
        if (players[j - 1] != val) {
            players[j] = val;
            ++j;
        }
    }

    p_len -= i - j;


    fin >> r_len;
    int rounds[r_len];
    for (i = 0; i < r_len; ++i)
        fin >> rounds[i];


    for (i = 0; i < r_len; ++i)
        cout << binary_search_closest(players, 0, p_len - 1, rounds[i]) + 1 << endl;


    return 0;
}
