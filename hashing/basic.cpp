#include<iostream>
using namespace std;
int main (){

int n;
cout<<"enter the number";
cin>>n;

 
int arr[n];
for(int i=0;i<n;i++){       //this count frequency
    cin>>arr[i];
}

  

//this is known as precompute like checking and updating 
int hash[13]={0};
for(int i=0;i<n;i++){
      hash[arr[i]]+=1;
}

 

int q;
cin>>q;
 while(q--){
    int num;
    cin>>num;
    //this is known as fetch 
    cout<<hash[num]<<endl;
 }

}