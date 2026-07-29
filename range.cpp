#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    if (b < c)
        cout << b + 1;
    else if (d < a)
        cout << d + 1;
    else
        cout << "No number";

    return 0;
}