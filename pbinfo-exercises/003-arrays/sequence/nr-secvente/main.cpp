#include <iostream>
using namespace std;

int i, n, t, k, secv_count, val;

int main() {
    cin >> n;
    cin >> t;
    cin >> k;

    int start{ -1 }, end{ -1 }, max_start{ -1 };

    for (i = 0; i < n; ++i) {
        cin >> val;
        if (val <= t) {
            if (start == -1) {
                start = i;
                max_start = i;
            }
            end = i;
        }
        else {
            if (start != -1) {
                if (end - start + 1 >= k)
                    secv_count += end - start + 1 - k + 1;
            }
            start = -1;
        }

    }

    if (end - max_start + 1 >= k)
        secv_count += end - start + 1 - k + 1;


    cout << secv_count << endl;

    return 0;
}