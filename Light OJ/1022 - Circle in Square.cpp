#include<iostream>
#include <iomanip>
#include<math.h>
using namespace std;
int main()
{
    int n;
    double a,m,area_of_squre,area_of_circle,output;
    double pi = 2 * acos (0.0);
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        cin>>a;
        m=a*2;
        area_of_squre=m*m;
        area_of_circle=pi*a*a;
        output=  area_of_squre - area_of_circle;
        cout<<setprecision(2);
        cout<<fixed;
        cout<<"Case "<<i<<": "<<output<<endl;

    }
}
