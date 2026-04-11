#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* insertEnd(int arr[],int n,int size){
    if(n>=size){
        return NULL;
    }
    Node* newNode=new Node(arr[n]);
    newNode->next=insertEnd(arr,n+1,size);
    return newNode;
}
int main(){
    Node* head;
    head=NULL;
    int arr[]={1,2,3,4,5};
    head=insertEnd(arr,0,5);    
    
    if(head!=NULL){
        Node *temp=head;
        head=head->next;
        delete temp;
    }
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}