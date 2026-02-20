#include<iostream>
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
bool isBST(Node* root,Node* min=NULL,Node* max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>=max->data){
        return false;
    }
    bool left=isBST(root->left,min,root);
    bool right=isBST(root->right,root,max);
    return left && right;
}

int main(){
    Node* root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    if(isBST(root)){
        cout<<"It is a BST";
    }
    else{
        cout<<"It is not a BST";
    }
}