#include<iostream>
usinng namespace std;
int main(){
    int arr[10],n;
    cin>>n;
    cout<<"enter the array:";
    for(int i=0;i<n;i++){
        cin<<arr[i];
    }
    int sum=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        sum-=arr[i];
    }
    cout<<"the missing number is:"<<sum;
}