#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        int a= s.length();
        int b=0,c=0;

        if(a==5)
        {
            cout<<3<<endl;
        }
        else
        {
            if(s[0]=='o')
            {
                b++;
            }
            if(s[1]=='n')
            {
                b++;
            }
            if(s[2]=='e')
            {
                b++;
            }

            if(s[0]=='t')
            {
                c++;
            }
            if(s[1]=='w')
            {
                c++;
            }
            if(s[2]=='0')
            {
                c++;
            }

            if(b>c)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }

        }
    }
}
