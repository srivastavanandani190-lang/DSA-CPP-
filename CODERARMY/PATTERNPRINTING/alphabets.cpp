#include<iostream>
using namespace std;
int main(){
    //for(int i=1;i<=5;i++)
    for(char i='a';i<='e';i++){//rows
        //char name='a'+i-1;
        for(int j=1;j<=5;j++){//columns
            //for(char j='a';j<='e';j++) same functions.
            cout<<i<<" ";
            //cout<<name<<" ";

        }
        cout<<"\n";
    }


    return 0;
}