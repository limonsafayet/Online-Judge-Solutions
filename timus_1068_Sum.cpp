#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int s=1;
    int sum=0;
    if(a< 1)
    {
        while(s >= a)
        {
        sum=sum+a;
        a++;
        }
    }
    else
    {
        while(s <= a)
        {
        sum=sum+a;
        a--;
        }
    }

    cout<<sum;

    return 0;
}
