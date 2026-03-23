 #include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    int n;
    cout<<"enter the number: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int> mp;

    // Count frequency
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    // Print frequencies
    for(auto it : mp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    int q;

    cout<<"enter the queries: ";
    cin>>q;

    while(q--){
        int num;
        cin>>num;

        cout<<mp[num]<<endl;
    }

}