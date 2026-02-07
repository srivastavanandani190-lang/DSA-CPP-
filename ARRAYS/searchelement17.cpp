#include<iostream>
using namespace std;
int main(){
int arr[6]={12,5,8,7,11,13};
int x;
cout<<"x:";
cin>>x;
int index=0;
for(int i=0;i<6;i++){
    if(x==arr[i]){
        index=i;
        break;
    }
}
cout<<index;

    return 0;
}