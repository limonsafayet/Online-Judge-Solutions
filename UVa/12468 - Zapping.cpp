#include<iostream>
using namespace std;

int main()
{
    int a,b;

    while(cin>>a>>b && a!=-1 && b!=-1)
    {
        int s,m;

        if(a < b)
        {
            s=b-a;
            m=100-b+a;
            if(s<m)
            {
                cout<<s<<endl;
            }
            else
            {
                cout<<m<<endl;
            }
        }
        else
        {
            s=a-b;
            m=100-a+b;
            if(s<m)
            {
                cout<<s<<endl;
            }
            else
            {
                cout<<m<<endl;
            }
        }
    }
}

