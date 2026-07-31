#include <iostream>
using namespace std;

int main() {
    int a[6] = {0, 8, 7, 12, 6, 9}; 

    for (int i = 2; i <= 5; i++) {
        int key = a[i];
        int j = i - 1;

        while (j >= 1 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    for (int i = 1; i <= 5; i++) {
        cout << a[i] << " ";
    }
    return 0;
}