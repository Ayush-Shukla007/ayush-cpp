  #include<iostream>
 using namespace std;
  
 int main(){
  
    int arr[100];
    int n; 

    int start=0;

    int end=n-1;
    cout<<"enter the array";
    cin>>n;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;




 }