#include<iostream>
using namespace std;
int main(){
int n;
//pallindrome pattern.
cout<<"ENTER THE NUMBERS OF ROWS:";
cin>>n;
for(int i=1;i<=n;i++){
    //space printing.
    for(int j=n-i;j>0;j--){
        cout<<"  ";
    }
    //1 to row.
    for(int k=1;k<=i;k++){
        cout<<k<<" ";
    }
    //row-1 to 1.
    for(int z=i-1;z>=1;z--)
{
    cout<<z<<" ";
    
}
    cout<<"\n";
}
    return 0;
}