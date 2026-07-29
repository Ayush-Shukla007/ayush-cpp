#include<iostream>
using namespace std;
int main(){
    
     int a[10];
     int t1=0;
     int t2=0;
     for (int i=0;i<10;i++){
        cin>>a[i];
     }
     for(int i=0;i<10;i++){
        if(a[i]==1 &&i%2==0 ){
            t2++;
        }
        else{
            t1++;
        }
     }
     if(t1>t2){
        cout<<1;

     }
     else if(t2>t1){
        cout<<2;
     }
     else {
        cout<<"error";
     }

}