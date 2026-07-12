#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        this->data=value;
        this->left=NULL;
        this->right=NULL;
    }
};
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node * Binarytree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node*temp=new Node(x);

    cout<<"Enter the left child of "<<x<<": ";
    temp->left=Binarytree();

    cout<<"Enter the right child of "<<x<<": ";
    temp->right=Binarytree();

   return temp;
}
int main(){

    cout<<"Enter the value of root node: ";
    Node* root=Binarytree();
    //can we call Binarytree directly without storing it in root?
    //Yes, we can call Binarytree directly but we won't be able to access the root node later in the program.
    //Storing it in a variable allows us to reference the root node and traverse the tree or perform other operations on it later.
    cout<<"Root value is: "<<root->data<<endl;

    cout<<"Preorder Traversal: ";
    preorder(root);

    cout<<endl;
    cout<<"Inorder Traversal: ";
    inorder(root);

    cout<<endl;
    cout<<"Postorder Traversal: ";
    postorder(root);
    return 0;
}