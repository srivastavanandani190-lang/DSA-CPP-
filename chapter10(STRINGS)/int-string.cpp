#include<iostream>
using namespace std;
//to_string()->int to string.
//string s=to_string(x).
int main(){
    int x=456321;
    string s=to_string(x);
    cout<<s<<"\n";
    s=s+"89";
    cout<<s;
    return 0;
}