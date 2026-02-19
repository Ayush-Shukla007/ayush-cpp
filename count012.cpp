#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,1,2,0,1,2,0,1,2,0};
    int c1=0;
    int c2=0;
    int c3=0;
    for(int i=0;i<10;i++){
        if(arr[i]==0){
            c1++;
        }
        else if(arr[i]==1){
            c2++;
        }
        else if(arr[i]==2){
            c3++;
        }
    }
    for(int i=0;i<c1;i++){
        arr[i]=0;
    }   
    for(int i=c1;i<c1+c2;i++){
        arr[i]=1;
    }
    for(int i=c1+c2;i<c1+c2+c3;i++){
        arr[i]=2;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}