#include <iostream>
using namespace std;
int main() {
int arr[7] = {1, 2, 3, 4, 5, 6, 7};
int d = 5; 
d= d % 7;
for(int j=0; j<d; j++) {
    int temp = arr[0];
    for(int i=1; i<7; i++) {
        arr[i-1] = arr[i];
    }
    arr[6] = temp;
}

    for(int i=0; i<7; i++) {
        cout << arr[i] << " ";
    }




}