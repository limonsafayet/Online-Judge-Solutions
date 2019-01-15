#include<iostream>
#include <algorithm>
using namespace std;

class obj {
   public:
     int a;
     int b;


    obj(){}

    bool operator < (obj X)const{
        return b>X.b;
    }
};

int main()
{
    int n;
    cin>>n;

    obj arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i].a;
        cin>>arr[i].b;
    }

    int i, j, index,d;

    stable_sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i].a<<" "<<arr[i].b<<endl;
    }

}
