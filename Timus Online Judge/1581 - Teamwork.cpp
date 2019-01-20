#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n ;i++)
    {
        cin>>arr[i];
    }

    int k=0,m=1;
    while(k < n)
    {
        for(int i=k; i<n; i++)
        {
            if(arr[i]==arr[i+1])
            {
                m++;
                continue;
            }
            else
            {
                cout<<m<<" "<<arr[i]<<" ";
                k=i+1;
                m=1;
                break;
            }
        }
    }
}
