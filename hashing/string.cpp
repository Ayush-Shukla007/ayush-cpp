 #include<iostream>
using namespace std;

int main() {

    string s;
    cout << "Enter the string: ";
    cin >> s;

    // Hash array for lowercase letters
    int hash[26] = {0};

    // Precompute frequency
    for(int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    // Query section
    while(q--) {
        char c;
        cin >> c;

        cout << hash[c - 'a'] << endl;
    }

    return 0;
}