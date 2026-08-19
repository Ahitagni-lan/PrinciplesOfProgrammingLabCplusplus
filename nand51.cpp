#include <iostream>
using namespace std;

int main() {
    int n, d;
    cout << "Enter a number: ";
    cin >> n;

    d = n - 51;

    if (d < 0)
        d = -d;

    if (n > 51)
        d = d * 3;

    cout << "Result = " << d;
    return 0;
}
