#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=5;i++){
    //space printing.
    for(int j=5-i;j>0;j--){
    //for(int j=1;j<=5-i;j++)
        cout<<" ";
    }
    //number printing.
    for(int k=1;k<=i;k++){
        cout<<i;
    }
    cout<<"\n";
}
    return 0;

}