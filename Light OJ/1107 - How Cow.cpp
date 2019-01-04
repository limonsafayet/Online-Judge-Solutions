#include<iostream>
using namespace std;

int main()
{
    int n,x1,y1,x2,y2,m,a,b;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>x1;
        cin>>y1;
        cin>>x2;
        cin>>y2;
        cin>>m;
        int arr[m];
        for(int j=0; j<m; j++)
        {
            cin>>a;
            cin>>b;
            if(a>=x1 && a<=x2)
            {
                if(b>=y1 && b<=y2)
                {
                    arr[j]=1;
                }
                else
                {
                    arr[j]=0;
                }
            }
            else
            {
                arr[j]=0;
            }
        }
        cout<<"Case "<<i<<":"<<endl;
        for(int j=0; j<m; j++)
        {
           if(arr[j]==1)
           {
               cout<<"Yes";
           }
           else
           {
               cout<<"No";
           }
           cout<<endl;
        }
    }

}
