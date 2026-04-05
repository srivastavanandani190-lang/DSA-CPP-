#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"marks:";
cin>>marks;
if (marks>=81 && marks<=100)
cout<<"VERY GOOD";
else if (marks>=61 && marks<=80)
cout<<"GOOD";
else if (marks>=41 && marks<=60)
cout<<"AVERAGE";
else cout<<"FAIL";

    return 0;
}