#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
static bool cmp(int x,int y){

 if(x<y){
    return true;
 }
 else{
    return false;
 }

}
int main(){
vector<int>v={34,32,55,1,36,98,3};
sort(v.begin(),v.end(),cmp);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}