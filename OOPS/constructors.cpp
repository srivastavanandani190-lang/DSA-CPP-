#include<iostream>
using namespace std;
class customer{
string name;
int accountnumber;
int balance;
//default constructor
public:
customer(){
    cout<<"Default constructor!"<<"\n";
    name="Honey";
    accountnumber=2730;
    balance=2500;
}
void display(){
    cout<<name<<"\n";
    cout<<accountnumber<<"\n";
    cout<<balance<<"\n";
}
};
int main(){
    customer obj1;
    obj1.display();
    return 0;
}