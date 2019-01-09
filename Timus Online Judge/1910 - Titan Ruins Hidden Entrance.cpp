#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>a;
        arr[i]=a;
    }
    int sum=arr[0]+arr[1]+arr[2];
	int m=2;

	for(int i=1;i+3<n+1;i++)
    {
		if(arr[i]+arr[i+1]+arr[i+2] >sum)
		{
			sum=arr[i]+arr[i+1]+arr[i+2];
			m=i+2;
		}
	}

	cout<<sum<<" "<<m<<endl;

	return 0;
}
