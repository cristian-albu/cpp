#include <iostream>
using namespace std;

int i, n;

int main() {
    cin >> n;
    int arr[n];
    for (i = 0; i < n; ++i)
        cin >> arr[i];


    int start_index{ -1 }, end_index{ -1 }, max_start_index{ -1 }, max_end_index{ -1 };

    for (i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            if (start_index == -1)
                start_index = i;
            end_index = i;
        }
        else {
            if (start_index != -1) {
                int curr_diff = end_index - start_index;
                if (curr_diff > max_end_index - max_start_index || max_start_index == -1) {
                    max_start_index = start_index;
                    max_end_index = end_index;
                }
                start_index = -1;
            }
        }
    }

    if (start_index != -1) {
        int curr_diff = end_index - start_index;
        if (curr_diff > max_end_index - max_start_index || max_start_index == -1) {
            max_start_index = start_index;
            max_end_index = end_index;
        }
        start_index = -1;
    }


    cout << max_start_index + 1 << " " << max_end_index + 1 << endl;

    return 0;

}