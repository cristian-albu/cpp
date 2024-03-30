#include <iostream>
using namespace std;

int i, n, prev_val, val;

int main() {
    cin >> n;

    int start{ -1 }, end{ -1 }, max_start{ -1 }, max_end{ -1 };

    for (i = 0; i < n; ++i) {
        cin >> val;
        if (val == prev_val || i == 0) {
            if (start == -1)
                start = i - 1;
            end = i;
        }
        else
            if (start != -1) {
                int curr_diff = end - start;
                if (curr_diff >= max_end - max_start || max_start == -1) {
                    max_start = start;
                    max_end = end;
                }
                start = -1;
            }
        prev_val = val;
    }

    if (start != -1) {
        int curr_diff = end - start;
        if (curr_diff >= max_end - max_start || max_start == -1) {
            max_start = start;
            max_end = end;
        }
        start = -1;
    }

    cout << max_start + 1 << " " << max_end + 1 << endl;

    return 0;
}