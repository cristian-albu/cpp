#include <iostream>
using namespace std;

int i, j, n, num;

int main() {
    cin >> n;

    int digit_freq[10] = { 0 };
    int freq[10] = { 0, 1 ,2 ,3 ,4 ,5 ,6 ,7, 8, 9 };

    for (i = 0; i < n; ++i) {
        cin >> num;
        while (num > 9) {
            int digit = num % 10;
            digit_freq[digit]++;
            num /= 10;
        }
        digit_freq[num]++;
    }


    for (i = 0; i < 9; ++i)
        for (j = i + 1; j < 10; ++j) {
            if (digit_freq[i] == digit_freq[j])
                if (freq[i] > freq[j])
                    swap(freq[i], freq[j]);

            if (digit_freq[i] > digit_freq[j]) {
                swap(digit_freq[i], digit_freq[j]);
                swap(freq[i], freq[j]);
            }
        }


    for (i = 0; i < 10; ++i)
        if (digit_freq[i] != 0)
            cout << freq[i] << " ";

    cout << endl;
    return 0;
}