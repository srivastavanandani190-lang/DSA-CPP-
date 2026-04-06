#include<iostream>
using namespace std;
//I DID IT.
//reverse ap.
int main(){
for(int i=1;i<=5;i++){
    for(int j=0;j<=i-1;j++){
    //for(int j=1;j<=5-i;j++)
        cout<<"  ";//observe pattern of space and star and realation with row's number.
    }
    for(int k=1;k<=11-(2*i);k++){
        cout<<"*"<<" ";
    }
    cout<<"\n";
}
    return 0;

}