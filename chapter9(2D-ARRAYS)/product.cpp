#include<iostream>
using namespace std;

int main(){
int arr[4][2]={{1,4},{5,1},{2,1},{1,3}};
int product=1;
for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
        product=product * arr[i][j];

    }
}
cout<<product;

    return 0;
}