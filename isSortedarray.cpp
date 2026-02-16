#include<iostream>
using namespace std;

int main() {

    int arr[5] = {1,23,3,5,5};
    int flag = 1;  

    for(int i = 1; i < 5; i++) {
        if(arr[i] < arr[i-1]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        cout << "sorted";
    else
        cout << "not sorted";

    return 0;
}
