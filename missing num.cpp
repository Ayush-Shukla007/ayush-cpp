
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace  std;
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i =0;i<n;i++){
    cin>>arr[i];
}
unordered_map<int,int>m;
for(int i=0;i<n;i++){
    m[arr[i]]++;
}
for(auto itr:m){
    cout<<itr.first<<":"<<itr.second<<endl;
}

}

