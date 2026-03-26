#include<iostream>
#include<algorithm>
using namespace std;
int main(){

int arr[]={1,22,33,9,11};
int n=5;
int target=12;
int left=0;
int right=n-1;
sort(arr,arr+n);

while(left<right){

int sum=arr[left]+arr[right];

if(sum==target){
    cout<<arr[left]<<" "<<arr[right];
    break;
}
else if(sum<target){
    left++;
}
else{
    right--;
}




}


}