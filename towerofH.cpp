#include<iostream>
using namespace std;

void towerofh(int n,char s,char h,char d){
    if(n==1){
        cout<<s<<"-->"<<d<<endl;
        return;
    }
    else {
        towerofh(n-1,s,d,h);
        cout<<s<<"-->"<<d<<endl;
        towerofh(n-1,h,s,d);
    }
}
int main(){
    int n;
    cout<<"Enter number of disks: ";
    cin>>n;
    towerofh(n,'s','h','d');
    return 0;
}

 