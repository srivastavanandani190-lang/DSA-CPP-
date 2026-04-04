#include<iostream>
using namespace std;
int main(){
int n;
cout<<"ENTER THE NUMBER OF ROWS AND COLUMNS = ";
cin>>n;

for(int i=1; i<=n;i++){
    for(int j=1;j<=n;j++){
        //char ch=(int)64+j;
        cout<<(char)(i+64)<<" ";//typecasting
    }
    
   cout<<"\n";
}
    return 0;
}