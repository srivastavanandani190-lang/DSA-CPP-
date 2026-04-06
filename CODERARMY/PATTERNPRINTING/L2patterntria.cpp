#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=5;i++){
    for(int j=5-i;j>0;j--){
    //for(int j=1;j<=5-i;j++)
        cout<<" ";//observe pattern of space and star and realation with row's number.
    }
    for(int k=1;k<=i;k++){
        cout<<"*";
    }
    cout<<"\n";
}
    return 0;

}