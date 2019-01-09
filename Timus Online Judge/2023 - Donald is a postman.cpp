#include <iostream>

using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    string m;
    int arr[n];
    arr[0]=1;
    for(int i=1;i<=n;i++)
    {
      cin >> m;

	  if(m[0]=='A' || m[0]== 'P' || m[0]=='O' || m[0]== 'R')
      {
          arr[i]= 1;
      }
      else if(m[0]=='B' || m[0]== 'M' || m[0]=='S')
      {
          arr[i]= 2;
      }
      else if(m[0]=='D' || m[0]== 'G' || m[0]=='J' || m[0]== 'K' || m[0]=='T' || m[0]=='W')
      {
          arr[i]= 3;
      }
    }
    int a,b;
    for(int i=0;i<n;i++)
    {
         a=arr[i];
         b=arr[i+1];
        if(a>b)
        {
           sum=sum+(a-b);
        }
        else if(a==b)
        {
            sum=sum+0;
        }
        else
        {
            sum=sum+(b-a);
        }
    }

    cout<<sum;

}
