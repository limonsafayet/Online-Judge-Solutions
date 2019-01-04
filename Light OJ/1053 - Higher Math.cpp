#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    unsigned long long int a,b,c;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        cin>>b;
        cin>>c;

        if((sqrt(a*a+b*b))==c)
        {
            cout<<"Case "<<i<<": "<<"yes"<<endl;
        }
        else if((sqrt(c*c+b*b))==a)
        {
            cout<<"Case "<<i<<": "<<"yes"<<endl;
        }
        else if((sqrt(a*a+c*c))==b)
        {
            cout<<"Case "<<i<<": "<<"yes"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<"no"<<endl;
        }

    }
}
