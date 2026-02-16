#include<iostream>
using namespace std;

int main(){
int*p;
int n;
cin>>n;
p=(int*)malloc(n*sizeof(int));
// p=new int[n];    easy method to allocate memory in c++ in cin can use cin>>*(p+i) and same for cout
for(int i=0;i<n;i++){
    cin>>p[i];

}

for(int i=0;i<n;i++){
    cout<<p[i]<<" ";
}

}
 