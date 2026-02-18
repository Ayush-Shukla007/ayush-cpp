#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,1,0,1,1,1,0,0,1,1};
    int count=0;
    int maxi=0;

    for(int i=0;i<10;i++){
        if(arr[i]==1){
            count++;
        }
        else if(arr[i]==0){
            if(count > maxi){
                maxi = count;
            }
            count = 0;
        }
    }

    
    if(count > maxi){
        maxi = count;
    }

    cout << "Maximum consecutive 1s = " << maxi;

    return 0;
}
