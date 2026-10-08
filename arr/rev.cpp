#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
getline(cin,s);
int l=0;
int r=s.size()-1;
while(l<r){
    swap(s[l],s[r]);
    l++;
    r--;
}
cout<<s;
}