#include<iostream>
using namespace std;
int main(){
int t;
while(t){
int n,x,y;
cout<<"enter the total , earn from 1 and from 2";
cin>>n>>x>>y;

int maxx;
 int s1=n*x;
 int s2=y*y/2+(n%2)*x;
 maxx=max(s1,s2);
 cout<<maxx;
t--;
}

}