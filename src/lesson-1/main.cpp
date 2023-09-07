// #include is used for libraries. iostream means input/output stream
#include <iostream>


// namespace to be able to use cin >> instead of std::cin >> , etc.
using namespace std;



// main() is the main program. 
int main()
{
    // Variable declaration 
    int a, b;

    // cin means console in. >> is for data that goes in
    cin >> a >> b;

    // cout means console out. << is for data that goes out
    cout << a + b;

    // Int needs to return something so we return 0
    return 0;
}