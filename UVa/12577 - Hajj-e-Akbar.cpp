#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    string s;
    int j=0;
    while(1)
    {
        cin>>s;
        if(s=="*")
        {
            break;
        }
        else if(s=="Hajj")
        {
            printf("Case %d: Hajj-e-Akbar\n",++j);
        }

        else if(s=="Umrah")
        {
            printf("Case %d: Hajj-e-Asghar\n",++j);
        }
     }
return 0;
}

