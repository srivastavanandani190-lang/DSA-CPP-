#include<iostream>
using namespace std;
int main(){
int x;
cout<<"THE VALUE OF x:";
cin>>x;
if (x%5==0 && x%3==0)
cout<<x<<" is divisible by 3 and 5 both!";
else cout<<x<<" is not divisible by 3 and 5 both!";

    return 0;
}