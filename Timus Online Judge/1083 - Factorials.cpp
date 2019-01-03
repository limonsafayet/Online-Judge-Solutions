#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
#include<stdio.h>
using namespace std;


int main()
{
    int a,k=0;
    cin>>a;

    char c;

    while(true)
    {
        c = getc(stdin);
        if(c=='\n') break;
        if(c=='!') ++k;
    }
    int sum=1;
    while(a > 0)
    {
        sum=sum * a;
        a=a-k;
    }
    cout<<sum;



}
