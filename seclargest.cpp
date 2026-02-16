#include<iostream>
using namespace std;

int main() {

    int arr[5] = {2, 3, 45, 22, 66};

    int large = arr[0];
    int seclarge = -1;

    for(int i = 1; i < 5; i++) {

        if(arr[i] > large) {
            seclarge = large;    
            large = arr[i];
        }
        else if(arr[i] > seclarge && arr[i] != large) {
            seclarge = arr[i];
        }
    }

    cout << seclarge;

    return 0;
}
