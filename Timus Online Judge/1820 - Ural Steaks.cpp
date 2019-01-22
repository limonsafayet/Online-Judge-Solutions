#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    double k,n;
    cin>>n>>k;

    if(k<n)
    {
        double a=(n/k)*2;
        double b=ceil(a);
        cout<<b;
    }
    else
    {
        cout<<2;
    }

}
