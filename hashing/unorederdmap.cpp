#include<iostream>
#include<map>
using namespace std;

int main(){

    int n;
    cout<<"enter the number: ";
    cin>>n;

    int arr[n];
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
    map<int,int> mp;

    
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    int q;
    cout<<"enter the queries: ";
    cin>>q;

    
    while(q--){
        int num;
        cin>>num;

        cout<<mp[num]<<endl;    
    }

    return 0;
}