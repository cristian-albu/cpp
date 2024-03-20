#include <iostream>
using namespace std;

long long i, j;

long long search(long long arr[], long long start, long long end,
    long long input) {

    if (end >= start) {
        long long midd{ start + (end - start) / 2 };

        if (arr[midd] == input)
            return midd;

        if (arr[midd] > input)
            return search(arr, start, midd - 1, input);

        return search(arr, midd + 1, end, input);

    }
    return -1;
}

int main() {
    long long p_len, r_len;

    cin >> p_len;
    long long players[p_len];
    for (i = p_len - 1; i >= 0; --i)
        cin >> players[i];

    cin >> r_len;
    long long rounds[r_len];
    for (i = 0; i < r_len; ++i)
        cin >> rounds[i];

    long long res = search(players, 0, p_len - 1, 120);

    cout << res;
    cout << endl;

    return 0;
}
