#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int  a;
    int i;
    int b;
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>b;

        if(b>10)
        {
            cout<<b-10<<" "<<b-(b-10)<<endl;

        }
        else
        {
        cout<<0 <<" "<<b<<endl;
        }

    }

return 0;
}
