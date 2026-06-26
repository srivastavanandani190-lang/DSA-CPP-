#include<iostream>
using namespace std;

class Minheap{
  int *arr;
  int size;//no of elements in heap
  int totalsize;//size of array
  public:
  Minheap(int n){
    arr=new int[n];
    size=0;
    totalsize=n;
  }
  
  //insert into heap
  void insert(int key){
    //check available space
    if(size==totalsize){
      cout<<"Heap is full"<<endl;
      return;
    }
   arr[size]=key;
   int i=size;
   size++;
    while(i>0 && arr[i]<arr[(i-1)/2]){
      swap(arr[i],arr[(i-1)/2]);
      i=(i-1)/2;
    }
  }

  //print heap
  void print(){
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};

int main(){
    Minheap h(5);
    h.insert(10);
    h.insert(20);
    h.insert(15);
    h.insert(30);
    h.insert(40);
    h.print();
    return 0;
}