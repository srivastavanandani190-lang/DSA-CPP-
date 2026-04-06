#include<iostream>
using namespace std;
int main(){
char arr[5]="1234";
char *ptr=arr;
//value as characterarray stored!
cout<<arr<<"\n";
cout<<ptr<<"\n";
for(int i=0;i<5;i++){
cout<<*(ptr+i);
}
//address
cout<<"\n"<<(void*)arr<<"\n";
cout<<(void*)ptr<<"\n";

char name='N';
char *p=&name;
//value as character stored!
cout<<*p<<"\n";
cout<<name<<"\n";
//address
cout<<(void*)&name<<"\n";
cout<<(void*)p<<"\n";
    return 0;
}