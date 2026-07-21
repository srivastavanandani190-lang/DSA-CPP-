#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
string s ="NANDANI";
cout<<s<<"\n";
reverse(s.begin(),s.begin()+2);
cout<<s<<"\n";

return 0;
}