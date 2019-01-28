#include<iostream>
using namespace std;

int main()
{
    int n,a,b,c,s=1;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        if(a<=20 && b<=20 && c<=20)
        {
            cout<<"Case "<<s<<": good"<<endl;
        }
        else
        {
            cout<<"Case "<<s<<": bad"<<endl;
        }
        s++;
    }
}
