#include<iostream>
using namespace std;

int main(){
    cout<<"PRINTING EVEN NUMBER FROM 1 TO 100"<<"\n";
    //100 times loop.
/*for (int i=1;i<=100;i++){
    if (i%2==0){
    cout<<i<<"\n";
    }//odd if(i%2!=0)
}*/
 for(int i=2;i<=100;i=i+2){ 
    cout<<i<<"\n";} //50 times loop runs
    
    return 0;
}