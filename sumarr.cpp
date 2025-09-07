#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int arr[100];
    cout<<"enter the number";
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>arr[i];

    }
    for(int i=0;i<n;i++){
    sum+=arr[i];
    }


    cout<<"the sum is: "<<sum;
}