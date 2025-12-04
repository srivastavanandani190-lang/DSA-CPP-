#include<iostream>
using namespace std;
//I did it!
int main(){
//I DID THIS!
int n;
cout<<"ENTER THE NUMBER = ";
cin>>n;
int originalN=n;//***

int sum=0;
while(n!=0){
    int ld=n%10;
    n=n/10;
    sum=ld+sum;
    sum=sum*10;
    
}

cout<<sum/10<<"\n";
cout<<"SUM OF NUMBER AND ITS REVERSE = "<<originalN+(sum/10);
    return 0;
}