#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
unordered_map<int,int> m;
m[1]=10;
m[2]=20;    
m[3]=30;
m[4]=10;
m[5]=20;
for(auto i:m)
{
    cout<<i.first<<" "<<i.second<<endl;
    
}
}