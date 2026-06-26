#include<iostream>
using namespace std;

class Maxheap{
  int *arr;
  int size;//no of elements in heap
  int totalsize;//size of array
  public:
  Maxheap(int n){
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
    while(i>0 && arr[i]>arr[(i-1)/2]){
      swap(arr[i],arr[(i-1)/2]);
      i=(i-1)/2;
    }
  }
  void heapify(int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<size && arr[left]>arr[largest]){
      largest=left;
    }
    if(right<size && arr[right]>arr[largest]){
      largest=right;
    }
    if(largest!=i){
      swap(arr[i],arr[largest]);
      heapify(largest);
    }
  }
  void deleteRoot(){
    if(size==0){
      cout<<"Heap is empty"<<endl;
      return;
    }
    arr[0]=arr[size-1];
    size--;
    heapify(0);
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
    Maxheap h(5);
    h.insert(10);
    h.insert(20);
    h.insert(15);
    h.insert(30);
    h.insert(40);
    h.print();
    h.deleteRoot();
    h.print();
    return 0;
}