#include <iostream>
using namespace std;

int n, x, i, highest{ 0 };


int full_cycle(int arr[], int highest, int max_obj) {
    int cycle_objects = 0;
    int cycle_seconds = 1;

    while (cycle_seconds <= highest && cycle_objects < max_obj) {
        for (i = 0; i < n; ++i)
            if (cycle_seconds % arr[i] == 0) {
                ++cycle_objects;
                if (cycle_objects == max_obj)
                    return cycle_objects;
            }
        ++cycle_seconds;
    }

    return cycle_objects;
}

int main() {
    cin >> n;
    cin >> x;
    int arr[n];
    for (i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] > highest)
            highest = arr[i];
    }

    int cycle_objs = full_cycle(arr, highest, x);

    if (cycle_objs == x) {
        cout << highest << endl;
        return 0;
    }

    int max_full_cycles = x / cycle_objs;
    int total_cycles_seconds = max_full_cycles * highest;
    int objects = max_full_cycles * cycle_objs;

    int last_cycle_seconds = 1;

    while (objects < x) {

        for (i = 0; i < n; ++i) {
            if (last_cycle_seconds % arr[i] == 0) {
                cout << "y";
                ++objects;
            }
            if (objects >= x) {
                cout << last_cycle_seconds + total_cycles_seconds << endl;
                return 0;
            }
        }
        cout << last_cycle_seconds << endl;
        ++last_cycle_seconds;
    }



    return 0;
}