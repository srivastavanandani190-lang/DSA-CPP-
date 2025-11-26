#include<iostream>
using namespace std;
void dob(int p[]){
    for(int j=0;j<5;j++){
        p[j]=2*p[j];
    }
}
int main(){
int arr[5]={1,2,3,4,5};
 dob(arr);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}