#include<iostream>
using namespace std;
int main(){

int n=7;
int arr[7]={1,0,1,0,1,1,1};
int c1=0;
int c2=0;
for(int i=0;i<n;i++){
    if(arr[i]==1){
        c1++;
    }
    else{
        c2++;
    }
}
if(c1>c2){
    cout<<"yes";
}
else{
    cout<<"no";
}













}