#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n%4 == 0 || (n+1)%4==0)
    {
        cout<<"black";
    }
    else
    {
        cout<<"grimy";
    }
}
