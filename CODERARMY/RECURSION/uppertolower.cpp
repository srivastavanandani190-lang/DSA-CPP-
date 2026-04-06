#include<iostream>
using namespace std;
 
void uppertolower(string &str,int index){
    if(index==-1){
        return;
    }
    str[index]='a'+(str[index]-'A');
    uppertolower(str,index-1);
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    uppertolower(str,str.length()-1);
    cout<<"String in lowercase: "<<str<<endl;
    return 0;
}
