#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    int sum = 0;
    cout << "Enter node values: ";
    for(int i = 0; i < n; i++){
        int value;
        cin >> value;
        sum += value;
    }

    cout << "Sum of all nodes: " << sum << endl;

    return 0;
}