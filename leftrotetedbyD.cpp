#include<iostream>
using namespace std;

int main() {
    int n, d;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter d (rotation count): ";
    cin >> d;

    d = d % n;   

    for(int j = 0; j < d; j++) {
        int temp = arr[0];

        for(int i = 1; i < n; i++) {
            arr[i-1] = arr[i];
        }

        arr[n-1] = temp;
    }

    cout << "Array after left rotation by d: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

  