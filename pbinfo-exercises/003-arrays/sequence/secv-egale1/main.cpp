#include <iostream>
using namespace std;

int i, j, n;

int main() {
    cin >> n;

    int arr[n];
    for (i = 0; i < n; ++i)
        cin >> arr[i];

    int start{ -1 }, end{ -1 };

    for (i = 0; i < n; ++i) {
        j = n - 1;
        while (j > i) {
            if (arr[j] == arr[i]) {
                if (j - i > end - start) {
                    start = i;
                    end = j;
                }
                break;
            }
            else
                --j;
        }

        if (n - i < end - start && start > -1 && end > -1)
            break;
    }

    cout << start + 1 << " " << end + 1 << endl;
    return 0;
}