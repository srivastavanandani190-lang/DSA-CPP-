#include<iostream>
using namespace std;

int main(){
    string s="Honey";
    cout<<s<<endl;

    // string name;
    // cin>>name;
    // cout<<name<<endl;//just before space

    string statment;
    cout<<"Enter : ";
    getline(cin,statment);
    cout<<statment<<endl;//after space
    cout<<"Length of statment is : "<<statment.length()<<endl;
    statment.push_back('!');
    cout<<statment<<endl;

    statment.pop_back();
    cout<<statment<<endl;

    //escape characters
    cout<<"hello \"honey\"";
    
    //concatenation
    string s1="good";
    string s2="morning";
    string s3=s1+s2;
    string s4=s1.append(s2);
    cout<<endl<<s3<<endl;
    cout<<s4<<endl;

    return 0;
}