#include<iostream>
using namespace std;
int main(){

int a,b;
cin>>a>>b;
while(a<b){
if(a%2!=0){
    a=a+1;
}
else {
    a=a+2;
}

}
if(a==b){
    cout<<"yes";
}
else{
    cout<<"No";
}

}