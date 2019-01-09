#include<iostream>
using namespace std;

int main()
{
    int k,n,a,b=0;
    cin>>k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        b=b+a;
        b=max(0,b - k);
    }
    cout<<b;
}
