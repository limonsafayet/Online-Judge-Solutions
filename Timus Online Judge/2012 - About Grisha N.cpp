#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int t=12-n;
    t = t * 45;
    t = t + 60;
    if(t <= 300)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}
