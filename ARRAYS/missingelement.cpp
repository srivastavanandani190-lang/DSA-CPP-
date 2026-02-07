#include<iostream>
using namespace std;
int main(){
int arr[5];
cout<<"ENTER THE ELEMENTS OF ARRAY:"<<"\n";

for(int i=0;i<5;i++){
    cin>>arr[i];
}
int sum=0;
for(int i=0;i<5;i++){
    sum=sum+arr[i];
}
int sum2=0;
for(int i=1;i<=6;i++){
sum2 += i;
}
cout<<"MISSING ELEMENT:"<<sum2-sum;

    return 0;
}
