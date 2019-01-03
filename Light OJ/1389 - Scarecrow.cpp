#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int i,j,k=0;
    int d=1;
    char arr[10000];
    for(i=0;i<a;i++)
    {
        int c=0;
        int h;
        cin>>h;
        cin>>arr;

        for(j=0;j<h;)
        {

            if(arr[j]=='#')
            {
                j++;
            }
            else
            {
                c++;
                j+=3;
            }
        }
        cout<<"Case "<<d<<": "<<c<<endl;
        k=0;
        d++;
    }

    return 0;
}
