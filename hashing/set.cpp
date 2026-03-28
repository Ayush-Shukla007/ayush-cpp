#include <iostream>
#include <unordered_set>
using namespace std;
int main(){


unordered_set<int>st;
st.insert(5);
st.insert(2);
st.insert(52);

st.insert(54);

if(st.find(15)!=st.end()){
    cout<<"found";
}
else{
    cout<<"nil";
}






}