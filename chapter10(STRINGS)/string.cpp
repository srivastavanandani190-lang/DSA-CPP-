//character array->>String.
#include<iostream>


using namespace std;
int main(){
string x ="NANDANI";
 cout<<x<<"\n";
 string y;
 cout<<"ENTER THE STRING: ";
 getline(cin,y);//cin in case of string doesn't include space just print first output.
cout<<"y: "<<y;
    return 0;
}