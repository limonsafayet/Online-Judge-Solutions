#include<iostream>
using namespace std;
int main(void)
{
    int c,l=1;
    cin>>c;
    for(int i=0;i<c;i++)
    {
        int a,b;
        cin>>a;
        cin>>b;
        if(b==a)
        {
         cout<<"Case "<<l<<": "<<(19+b*4)<<endl;
        }
        else if(b>a)
        {
         cout<<"Case "<<l<<": "<<(19+b*4)<<endl;
        }

        else
        {
         cout<<"Case "<<l<<": "<<(19+a*4+(a-b)*4)<<endl;
        }

        l++;

    }
}
