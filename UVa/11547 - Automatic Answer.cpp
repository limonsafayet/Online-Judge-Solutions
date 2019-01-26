#include<iostream>
using namespace std;

int main()
{
    long long a,b,c,d,e,f,h,g,k,t,n;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        a=n*567;
        b=a/9;
        c=b+7492;
        d=c*235;
        e=d/47;
        f=e-498;
        h=f%100;
        g=h/10;

        if(g<0)
        {
            k=g-g-g;
            cout<<k<<endl;
        }
        else
        {
            cout<<g<<endl;

        }


    }
}
