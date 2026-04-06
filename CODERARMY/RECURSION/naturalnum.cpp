#include<iostream>
using namespace std;

void naturalnum(int n){
    if(n==0){
        return;
    }
    // cout<<n<<" "; 10,9,8,7,6,5,4,3,2,1
    naturalnum(n-1);
    cout<<n<<" ";//1,2,3,4,5,6,7,8,9,10

}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    // for(int i=1;i<=n;i++){
    //     cout<<i<<" ";
    // }    cout<<endl;

    cout<<"Natural numbers from 1 to "<<n<<" are: ";
    naturalnum(n);
    return 0;
}