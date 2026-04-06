#include<iostream>
using namespace std;
int main(){
for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        //j<=5-i+1
        cout<<5+(1-j)<<" ";//observe the pattern
    }
    cout<<"\n";
}
    return 0;
}

