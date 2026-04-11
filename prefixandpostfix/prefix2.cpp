#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout << "enter the number ";
    cin >> n;

    vector<int> arr(n);
    vector<int> prefix(n);

   
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

   
    prefix[0] = arr[0];

    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    int q;
    cin >> q;

    while(q--){

        int l, r, sum;

        cin >> l >> r;   
        if(l == 0){
            sum = prefix[r];
        }
        else{
            sum = prefix[r] - prefix[l-1];
        }
        cout << sum << endl;
    }

} 
