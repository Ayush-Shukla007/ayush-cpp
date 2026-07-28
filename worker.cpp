#include<iostream>
using namespace std;
int main(){
int t;
int d,x,y,z;
cout<<"enter the values";
while(t--){
cin>>d>>x>>y>>z;
int s1=7*x;
int s2=d*y+(7-d)*z;
int maxi=max(s1,s2);
cout<<maxi;
 
}

} 