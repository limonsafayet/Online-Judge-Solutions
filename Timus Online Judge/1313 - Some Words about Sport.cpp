#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];

        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<arr[i-j][j]<<" ";
        }
    }

    int k=0,m=1,a,b;
    while(m!=n)
    {
        k=n-1;
        a=m;
        b=1;
        cout<<arr[k][m]<<" ";

        for(int j=m; j<k; j++)
        {
            a++;
            cout<<arr[k-b][a]<<" ";
            b++;

        }

        m++;
    }
}
