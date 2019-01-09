#include<iostream>
using namespace std;

int main()
{

    int a,b;
    int arr[3],arr1[3];

    for(int i=0;i<3;i++)
    {
        cin>>a;
        cin>>b;
        arr[i]=a;
        arr1[i]=b;

    }

    cout<<arr[0]-arr[2]<<" "<<arr1[0]-arr1[1];

}
