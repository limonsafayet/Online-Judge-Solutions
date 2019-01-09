#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    int d=a-b-c;
    int e=a-b*c;
    if(d>e)
    {
        cout<<e;

    }
    else
    {
        cout<<d;
    }
}
