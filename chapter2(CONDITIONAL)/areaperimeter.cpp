#include<iostream>
using namespace std;
int main(){
int l,b,area,perimeter;
cout<<"LENGTH:";
cin>>l;
cout<<"BREADTH:";
cin>>b;
area=l*b;
perimeter=2*(l+b);
if (area>perimeter) cout<<"AREA:"<<area<<" IS GREATER THAN PERIMETER:"<<perimeter;

else if (area<perimeter) cout<<"PERIMETER:"<<perimeter<<" IS GREATER THAN AREA:"<< area;

else cout<<"BOTH ARE EQUAL";

    return 0;
}