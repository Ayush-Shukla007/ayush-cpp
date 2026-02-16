// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// static bool cmp(int x,int y){
//     if(x>y){
//         return true;
//     }
//     else{
//         return false;
//     }

// }
// int main(){
//     vector<int>v={44,45,75,1,545};
//     sort(v.begin(),v.end(),cmp);
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// }


 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 int main(){
    vector<int>v;
    v.push_back(11);
        v.push_back(17);
        v.push_back(112);
        v.push_back(1);
        v.push_back(51);
        v.push_back(21);
        v.push_back(1);
    sort(v.begin(),v.end());
    cout<<"the sorted array is:";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
 }