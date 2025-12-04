#include<iostream>
using namespace std;
int main(){
int n;
cout<<"ENTER THE NUMBER OF ROWS AND COLUMNS = ";
cin>>n;

for(int i=1; i<=n;i++){
    for(int j=1;j<=i;j++){
        if(i%2==0){
        cout<<(char)(j+64)<<" ";//typecasting
    }
    else cout<<j<<" ";
}
   cout<<"\n";
}
    return 0;
}