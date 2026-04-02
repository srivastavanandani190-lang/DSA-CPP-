#include<iostream>
using namespace std;
int main(){
int x,y;
cout<<"x:";
cin>>x;
cout<<"y:";
cin>>y;
if(x>0 && y>0) cout<<"first quadrant";
else if (x>0 && y<0) cout<<"fourth quadrant";
else if (x<0 && y>0) cout<<"second quadrant";
else if (x<0 && y<0) cout<<"third quadrant";
else if (x==0 && y!=0) cout<<"lies on y axis";
else if (y==0 && x!=0) cout<<"lies on x axis";
else cout<<"origin";
    return 0;
}