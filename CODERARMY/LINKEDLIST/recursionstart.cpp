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
Node* insertstart(int arr[],int n,int size,Node* prev){
    if(n>=size){
        return prev;
    }
    Node* temp;
    temp=new Node(arr[n]);
    temp->next=prev;
    return insertstart(arr,n+1,size,temp);
}

int main(){
    Node* head;
    head=NULL;
    int arr[]={1,2,3,4,5};
    head=insertstart(arr,0,5,NULL);    
    
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}