#include<iostream>
using namespace std;
int main(){
//int size=10,b[size];->correct.
// int b[size],size=10;->incorrect.
//num[4]-> 5th element or 4th indices element.

int arr[]={1,2,3,4,5};//initialisation + declaration.
//updation can be done.

for(int i=0;i<=4;i++){
    cout<<arr[i]*3<<" ";
}
cout<<"\n";
//reverse array printing.
for(int i=4;i>=0;i--){
cout<<arr[i]<<" ";
}
    return 0;
}