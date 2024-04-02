#include <iostream>
using namespace std;


int n{ 31 }, m{ 28 }, l{ 34 };
int arr[500] = { 1, 2, 1, 3, 2 , 1, 4, 3, 2, 1, 5, 4, 3, 2, 1, 6, 5, 4, 3, 2 , 1, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 9, 8, 7, 6, 5, 4, 3, 2, 1, };


int check_last(int len) {
    int i{ 1 }, j{ 1 };
    while (i < len + 1) {
        ++j;
        i += j;
    }

    if (i == len + 1)
        return 1;

    if (i > len + 1) {
        i -= j;
        while (i < len + 1) {
            ++i;
            --j;
        }
        ++j;
    }

    return j;
}




int main() {
    int test1 = check_last(n);
    int test2 = check_last(m);
    int test3 = check_last(l);

    cout << arr[n] << " " << arr[m] << " " << arr[l] << endl;
    cout << test1 << " " << test2 << " " << test3 << endl;

    return 0;
}
