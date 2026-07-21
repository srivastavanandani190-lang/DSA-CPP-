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

    
    return 0;
}