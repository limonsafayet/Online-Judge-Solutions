#include<iostream>
using namespace std;
int k=0;

void check(int m)
{
   int s=0,s1=0,b=0,d;
   while(m>0)
   {
      d=m%10;
      if(b<3)
      {
          s=s+d;
      }
      else
      {
          s1=s1+d;
      }
      m=m/10;
      b++;
   }

    if(s == s1)
    {

        k=1;
    }

}

int main()
{
    int n;
    cin>>n;

    int a=n+1;
    int b=n-1;
    check(a);
    check(b);
    if(k==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

}
