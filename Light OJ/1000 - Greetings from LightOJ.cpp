#include<stdio.h>

int main()
{
    int T,a,b,i,j=0,sum;
    scanf("%d",&T);

        for(i=0;i<T;i++)
        {
            scanf("%d",&a);
            scanf("%d",&b);
            sum=a+b;
            j++;
           printf("Case %d: %d\n",j,sum);

        }

}
