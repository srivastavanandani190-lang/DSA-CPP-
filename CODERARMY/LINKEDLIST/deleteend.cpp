#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* insertEnd(int arr[], int n, int size){
    if(n >= size){
        return NULL;
    }
    Node* newNode = new Node(arr[n]);
    newNode->next = insertEnd(arr, n + 1, size);
    return newNode;
}

int main(){
    Node* head = NULL;
    int arr[] = {1,2,8,9,6};
    
    head = insertEnd(arr, 0, 5);

    // 🔥 Correct deletion of last node
    if(head != NULL){
        // Case 1: Only one node
        if(head->next == NULL){
            delete head;
            head = NULL;
        }
        else{
            Node* temp = head;
            Node* prev = NULL;
            
            while(temp->next != NULL){
                prev = temp;
                temp = temp->next;
            }
            
            delete temp;
            prev->next = NULL;
        }
    }

    // Print list
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}