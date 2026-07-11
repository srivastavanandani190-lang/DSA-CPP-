#include<iostream>
#include<queue>
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

//Tree is a data structure which is used to represent hierarchical data.
//It consists of nodes connected by edges. Each node contains a value and pointers to its child nodes. 
//The topmost node is called the root, and nodes with no children are called leaves.
//Trees are widely used in computer science for various applications such as searching, sorting, and representing hierarchical relationships.

int main(){
    int x,l,r;
    cout<<"Enter the root value: ";
    cin>>x;
    Node* root=new Node(x);
    queue<Node*> q;
    q.push(root);

    // Level order insertion
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        cout<<"Enter the left child values: "<<temp->data<<" : ";
        cin>>l;
        if(l!=-1){
            temp->left=new Node(l);
            q.push(temp->left);
        }

        cout<<"Enter the right child values: "<<temp->data<<" : ";
        cin>>r;
        if(r!=-1){
            temp->right=new Node(r);
            q.push(temp->right);
        }
    }
    return 0;
}
