#include<iostream>
using namespace std;
int main()
{
    int arr[4]={1,2,3,4};
    int largest=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"largest element is "<<largest;
    return 0;   
}