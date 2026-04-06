#include<iostream>
using namespace std;

int main(){
int arr[4][2]={{12,45},{56,89},{88,7},{75,23}};
int sum=0;
for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
        sum=sum+arr[i][j];

    }
}
cout<<sum;

    return 0;
}