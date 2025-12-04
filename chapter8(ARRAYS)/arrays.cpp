//arrays is a type of datastorage.
//it store multiple data by single decalaration.
//int x[5]->five boxes named as x.
#include<iostream>
using namespace std;
int main(){
int x[5];
//indexing->
/*x[0]=1;//initialization of each elements of an arrays.
x[1]=2;*/
cout<<"ENTER THE VALUES: ";
for(int i=0;i<=4;i++){
    cin>>x[i];
}
for(int i=0;i<=4;i++){
    cout<<x[i]<<" ";
}
x[0]=100;//updation.
cout<<"\n";
for(int i=0;i<=4;i++){
    cout<<x[i]<<" ";
}

    return 0;
}