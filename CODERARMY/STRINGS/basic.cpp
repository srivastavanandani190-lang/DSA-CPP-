#include<iostream>
using namespace std;

int main(){
    char arr[]={'a','p','p','l','e'};
    cout<<arr<<"\n";

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
   char arr0[5];//one for null character
   cout<<"\nEnter your name: ";
   cin>>arr0;
   arr0[4]='\0';//null character
   cout<<"\nHello, "<<arr0<<"!\n";
   
    return 0;
}