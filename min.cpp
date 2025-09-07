#include<iostream>
using namespace std;
int main(){
int n;
int arr[100];
cout<<"enter the number";
cin>>n;
int ans=INT16_MAX;
cout<<"enter the element";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    if(arr[i]<ans){
        ans=arr[i];
    }
}
cout<<"the answer is: "<<ans;
}