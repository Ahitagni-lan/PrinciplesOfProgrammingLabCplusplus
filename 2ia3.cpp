#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    if (a + b == c || a + c == b || b + c == a)
        cout << "It is possible";
    else
        cout << "It is not possible";

    return 0;
}
