#include<iostream>
using namespace std;
#include<cmath>
int sumofsqu(int n)
{
    if(n==0)
    {
        return 0;
    }
    return pow(n,2) + sumofsqu(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The sum of squares is: "<<sumofsqu(n);
    return 0;
}
