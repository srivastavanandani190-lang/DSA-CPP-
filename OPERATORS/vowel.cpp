#include<iostream>
using namespace std;
int main(){
 char ch;
 cout<<"character:";
 cin>>ch;
 //if else works on either condition is true or false(0 or 1)
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    cout<<"VOWEL";
}
else{
    cout<<"CONSONANT";
}
    return 0;
}