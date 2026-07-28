#include <iostream>
using namespace std;

int main() {
    int p;
    cin >> p;
    while (p--) {
        string s, t, m;
        cin >> s >> t;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == t[i])
                m += 'G';
            else
                m += 'B';
        }
        cout << m << endl;
    }
    return 0;
}