#include<iostream>
using namespace std;
class area{
    public:
    void getarea(int l,int b){
        cout<<"Area of Rectangle: "<<l*b<<endl;
    }
    void getarea(int s){
        cout<<"Area of Square: "<<s*s<<endl;
    }
    void getarea(float r){
        cout<<"Area of Circle: "<<3.14*r*r<<endl;
    }
};
//function overloading.(name same, parameters different)
int main(){
    area a;
    //complier determines which function to call based on the arguments.
    a.getarea(5,10);   // Rectangle
    a.getarea(7);      // Square
    a.getarea(3.5f);   // Circle
    return 0;
}