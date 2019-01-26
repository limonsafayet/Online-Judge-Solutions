#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c=1;
    while (getline(cin, s))
    {
        for (string::iterator i = s.begin(); i != s.end(); ++i)
        {
            if (*i == '"')
            {
                if (c%2==0)
                {
                   cout << "''";
                }

                else
                {
                   cout << "``";
                }

                c++;
            }
            else
                cout << *i;
       }
        cout <<endl;
    }



}
