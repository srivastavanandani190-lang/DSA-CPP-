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
int main(){
    Node* head;
    head=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new Node(arr[i]);
        }
        else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new Node(arr[i]);
        }
}
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}