#include<iostream>
using namespace std;

int main()
{
    int n,k,a,b=0,c=0;
    cin>>n;
    cin>>k;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a<=k)
        {
            b=b+(k-a);
        }
        else
        {
            c=c+(a-k);
        }
    }
    cout<<c<<" "<<b;
}
