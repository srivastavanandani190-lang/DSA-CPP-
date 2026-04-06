#include<iostream>
#include<string>
using namespace std;

int main(){
string s ="NANDANI";
cout<<s<<"\n";
reverse(s.begin(),s.begin()+3);
cout<<s<<"\n";

return 0;
}