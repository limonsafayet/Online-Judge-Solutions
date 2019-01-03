#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
   int t,m,te;
   long long n,s,x,y;
   cin>>m;
   for(int i=1;i<=m;i++)
  {
    cin>>s;
    n=ceil(sqrt ((double)(s)));

    if(n*n-s<n)
    {
      x=n;
      y=n*n-s+1;
    }

     else
     {
        x=-n*n+2*n+s-1;
        y=n;
     }
     if(n&1)
     {
        te=x;
        x=y;
        y=te;
     }
        printf("Case %d: %lld %lld\n",i,x,y);
    }
    return 0;
}
