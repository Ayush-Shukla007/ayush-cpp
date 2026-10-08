 #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int& x : a) cin >> x;

    sort(a.begin(), a.end());

    int i = n - 2;  // Start before the largest value

    while (i >= 0 && a[i] == a[n - 1]) {
        i--;  // Skip duplicates of the largest
    }

    if (i >= 0) cout << a[i];
    else cout << "No second-largest distinct value";
}