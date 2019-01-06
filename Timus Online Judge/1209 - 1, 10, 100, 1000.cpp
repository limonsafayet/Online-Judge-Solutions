#include <iostream>
#include <map>
using namespace std;
map<long long,bool> a;
int main()
{
	a[1]=true;
	a[2]=true;
	long long i,p=2,b,c,d,n;
	long long k=2;
	while(k<= 10000000000 )
	{
		k=k+p;
		a[k]=true;
		p++;
	}
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>b;
		if(a[b]==true)
        {
           cout<<"1 ";
        }

		else
        {
          cout<<"0 ";
        }

	}

	return 0;
}
