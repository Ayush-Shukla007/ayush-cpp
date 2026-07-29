#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int op1;
    int op2;
    if(x<y){
    int op1=x+1;
      op2=y;
}
    else{
    op1=x;
    op2=y+2;
    }
    int minn=min(op1,op2);
    cout<<minn;
    return 0;
   
}