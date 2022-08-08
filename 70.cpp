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
    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>=max->data){
        return false;
    }
    bool leftvalid=isBST(root->left,min,root);
    bool rightvalid=isBST(root->right,max,root);
    return leftvalid and rightvalid;
}

int main(){
    struct Node* root=new Node(2);
    root->left=new Node(1);
     root->right=new Node(3);
     if(isBST(root,NULL,NULL)){
        cout<<"valid"<<"";
     }
     else{
        cout<<"not valid"<<"";
     }
   return 0;
   
}