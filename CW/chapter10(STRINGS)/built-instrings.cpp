//STL(Standard template library)
#include<iostream>
using namespace std;
int main(){
string s="NANDANI";
cout<<s<<"\n";
/*s.push_back('s');//add something at back of string.
cout<<s<<"\n";*/
/*s.pop_back();//remove last charater.
cout<<s<<"\n";*/
s.append(" srivastava");//add string at end along with space.
cout<<s<<"\n";
s.clear();//empty the string.
cout<<s<<" "<<s.length()<<"\n";

    return 0;
}