#include<iostream>
using namespace std;
int main(){
int sp,cp;
cout<<"SELLING PRICE:";
cin>>sp;
cout<<"COST PRICE:";
cin>>cp;
if (sp>cp){
    cout<<"ITS PROFIT!\n"<<"PROFIT:"<<sp-cp;
}
else if (cp>sp){
    cout<<"ITS LOSS!\n"<<"LOSS:"<<cp-sp;
}
else{
cout<<"NEITHER LOSS NOR PROFIT";
}
    return 0;
}