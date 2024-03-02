#include <fstream>
using namespace std;

ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");

int n;
long long v[1001];
int div_v[1001];

int count_divisors(long long num) {
    if (num == 1) return 1;

    int count = 1;

    for (int i = 2; i * i <= num; ++i) {
        int exponent = 0;
        while (num % i == 0) {
            num /= i;
            ++exponent;
        }
        count *= (exponent + 1);
    }

    if (num > 1)
        count *= 2;


    return count;
}

int main()
{
    fin >> n;
    for (int i{ 0 }; i < n; ++i) {
        fin >> v[i];
        div_v[i] = count_divisors(v[i]);
    }

    for (int i{ 0 }; i < n - 1; ++i)
        for (int j{ i + 1 }; j < n; ++j)
            if (div_v[i] < div_v[j] || (div_v[i] == div_v[j] && v[i] > v[j])) {
                swap(div_v[i], div_v[j]);
                swap(v[i], v[j]);
            }

    for (int i{ 0 }; i < n; ++i)
        fout << v[i] << " ";

    fout << endl;
    return 0;
}