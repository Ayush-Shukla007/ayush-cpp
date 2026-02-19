#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int target=8;


    for(int i=0;i<5;i++){

     for(int j=i+1;j<5;j++){
        if(arr[i]+arr[j]==target){
            cout<<"yes"<<endl;
            cout<<i<<" "<<j;
            return 0;
        }
     }

    }
    cout<<"no";
    return 0;
}