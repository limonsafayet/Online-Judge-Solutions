#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    long long sum=0,x;
    cin>>n;

    string s;

    while (n!=0)
    {
        cin>>s;
        if(s=="report")
        {
            cout<<sum<<endl;
        }
        else
        {
           cin>>x;
           sum=sum+x;
        }
        n--;
    }

}
