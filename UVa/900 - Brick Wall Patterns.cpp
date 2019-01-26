#include<iostream>
using namespace std;

int main()
{
    int a[60],n;

    while((cin>>n)&& n!=0 && n<=50)
    {
        if(n==1)
        {
            cout<<1<<endl;
        }
        else
        {
          a[0]=0;
          a[1]=1;
          for(int i=2;i<=n+1;i++)
          {
            a[i]=a[i-1]+a[i-2];
          }
          cout<<a[n+1]<<endl;
        }

    }
}
