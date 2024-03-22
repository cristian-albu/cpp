#include <iostream>
using namespace std;

long long binary_search_closest_index(long long arr[], long long first, long long last, long long val) {
    long long mid = first + (last - first) / 2;

    if (last >= first) {
        if (val == arr[mid])
            return mid + 1;

        if (arr[mid] > val)
            return binary_search_closest_index(arr, mid + 1, last, val);

        return binary_search_closest_index(arr, first, mid - 1, val);
    }

    return mid;
}



int main() {
    long long i, p_len, r_len;

    cin >> p_len;
    long long players[p_len];
    for (i = 0; i < p_len; ++i)
        cin >> players[i];

    cin >> r_len;
    long long rounds[r_len];
    for (i = 0; i < r_len; ++i)
        cin >> rounds[i];


    for (i = 0; i < r_len; ++i) {
        long long res = binary_search_closest_index(players, 0, p_len - 1, rounds[i]);
        cout << res << endl;
    }

    return 0;
}
