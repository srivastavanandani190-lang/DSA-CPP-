#include<iostream>
using namespace std;
int  main(){
int a,b;
cout<<"ENTER THE NUMBER = ";
cin>>a;
if(a==1) cout<<"NEITHER PRIME NOR COMPOSITE";

if(a==2){
    cout<<"THIS IS PRIME NUMBER";
}
else {
    for(int i=2;i<a;i++){
        if(a%i==0){
            b=0;//remainder because starting with two.
            cout<<"COMPOSITE NUMBER"<<"\n";
            break;
        }
        else{
        b=1;
        }
    }
        if (b==1){
            cout<<"THIS IS PRIME NUMBER";
        }
            
    
}
    return 0;
}