#include<stdio.h>

int main()
{
    int c,l=1;
    scanf("%d",&c);
    int i=0;
    unsigned long long int sum = 0;
    while(i<c)
    {
        int d;
        scanf("%d",&d);

        for(int j=0;j<d;j++)
        {
            int f;
            scanf("%d",&f);
            if(f>0)
            {
              sum+=f;
            }

        }

        printf("Case %d: %lld\n",l,sum);
        l++;
        i++;
        sum=0;
    }
    return 0;
}
