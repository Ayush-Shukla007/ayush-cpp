#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,2,3,3,2,2};
    int c=0;
    int c1=0;
    int ans;
    for(int i=0;i<6;i++){
        if(c==0){
            c=1;
            ans=arr[i];
        }
        else if(ans==arr[i]){
            c++;
        }
        else{
            c--;
        }

    }
    for(int i=0;i<6;i++){
        if(ans==arr[i]){
            c1++;
        }

    }
    if(c1>6/2){
        cout<<"ans is: "<<ans;
    }
    else{
        cout<<"No such element";
    }
}