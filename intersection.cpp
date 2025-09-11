 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;

    
    cout << "Enter size of first array: ";
    cin >> m;
    vector<int> a(m);
    cout << "Enter elements of the first array (sorted): ";
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n;
    vector<int> b(n);
    cout << "Enter elements of the second array (sorted): ";
    for (int j = 0; j < n; j++) {
        cin >> b[j];
    }

    vector<int> c;
    int i = 0, j = 0;

    
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            // c.push_back(a[i]);
            i++;
        } else if(b[j]<a[i]){
            // c.push_back(b[j]);
            j++;
        }
        else {

            if(a[i]=b[j]){}
            c.push_back(a[j]);
            i++;
            j++;
        }
        }


    
    // while (i < m) {
    //     c.push_back(a[i]);
    //     i++;
    // }

    
    // while (j < n) {
    //     c.push_back(b[j]);
    //     j++;
    // }

    
    cout << "union is: ";
    for (int x = 0; x < c.size(); x++) {
        cout << c[x] << " ";
    }
}
 