#include<iostream>
using namespace std;


int binaryexp(int a,int b){
    if(b==0)
        return 1;
    int res=binaryexp(a,b/2);
    if(b%2==0)
        return res*res;
    else
      if(b>0)
        return a*res*res;
       else
       return 1/a*res*res; 
}
 int main(){
// int a,b;
// cin>>a,b;
cout<<binaryexp(2,3);


 }