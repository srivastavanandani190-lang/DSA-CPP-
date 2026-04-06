#include<iostream>
using namespace std;
int main(){
int n;
cout<<"ENTER THE VALUE OF n = ";
cin>>n;
int arr[n];
int sumeven=0;
int sumodd=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(i%2==0) {
        sumeven=sumeven+arr[i]; 
        
    }
  else if (i%2!=0){
        sumodd=sumodd+arr[i];
        
    }
}
cout<<sumeven<<"\n";
cout<<sumodd<<"\n";
cout<<sumeven-sumodd;
    return 0;
}