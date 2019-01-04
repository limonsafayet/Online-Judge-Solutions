#include<iostream>
using namespace std;
int main()
{
    int n,a,b,sum=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        while(a != 0)
        {
            b=a%2;
            sum=sum+b;
            a=a/2;
        }
        if(sum%2==0)
        {
            cout<<"Case "<<i<<": "<<"even"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<"odd"<<endl;
        }
        sum=0;
    }
}
