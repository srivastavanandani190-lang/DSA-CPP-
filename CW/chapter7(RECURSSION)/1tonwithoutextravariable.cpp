#include<iostream>
using namespace std;

void print(int n){
    
    if(n==0)  return;
    print(n-1);//call phale lagg rha hai aur printing last to first.
    cout<<n<<"\n";

}

int main(){
    int n;
    cout<<"ENTER THE VALUE OF n = ";
    cin>>n;
print(n);

    return 0;
}