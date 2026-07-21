#include<iostream>
using namespace std;

int main(){
int count=0;
string str;
cout<<"Enter the string: ";
getline(cin,str);
int i=0;
while(str[i]!='\0'){
    count++;
    i++;
}

cout<<count;
    return 0;
}