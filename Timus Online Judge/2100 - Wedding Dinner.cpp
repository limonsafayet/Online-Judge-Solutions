#include<iostream>
#include<string>


using namespace std;

int main()
{
    int n,sum=2;
    string s1;
    string s2 = "+one";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s1;
        if(s1.find(s2) != string::npos)
        {
           sum=sum+2;
        }
        else
        {
            sum++;
        }

    }
    if(sum==13)
    {
        sum=sum+1;
        cout<<sum * 100;
    }
    else
    {
        cout<<sum * 100;
    }

}
