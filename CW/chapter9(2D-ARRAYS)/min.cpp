#include<iostream>
using namespace std;

int main(){
int arr[4][2]={{12,45},{56,89},{88,7},{75,23}};
int mn=INT32_MAX;
for(int i=0;i<4;i++){
    for(int j=0;j<2;j++){
        mn=min(mn,arr[i][j]);

    }
}
cout<<mn;

    return 0;
}