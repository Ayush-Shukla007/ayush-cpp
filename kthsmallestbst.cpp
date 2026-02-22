#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int kthSmallest(Node* root,int k){
    stack<Node*> st;
    Node* curr=root;
    while(curr!=NULL || !st.empty()){
        while(curr!=NULL){
            st.push(curr);
            curr=curr->left;
        }
        curr=st.top();
        st.pop();
        k--;
        if(k==0){
            return curr->data;
        }
        curr=curr->right;
    }
    return -1; 
}
int main(){
    Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(6);
    root->left->left=new Node(2);
    root->left->right=new Node(4);
    int k=3;
    cout<<"The "<<k<<"rd smallest element is: "<<kthSmallest(root,k);
}