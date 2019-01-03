#include <stdio.h>
int main()
{
    int m , n, temp, p_res, tem_chec;
    int tstc, i;
    scanf("%d", &tstc);
    for(i=1; i<=tstc; i++)
    {
        scanf("%d%d", &m, &n);
        temp = m * n;
        if(m==1 || n==1)    p_res = temp;
        else if(m==2 || n==2)
        {
            if(m==2) tem_chec = n;
            else     tem_chec = m;
            if(tem_chec%4 == 1)
            {
                p_res = tem_chec+1;
            }
            else if(tem_chec%4 == 2){
                    p_res = tem_chec+2;
            }
            else if(tem_chec%4 == 3) {
                    p_res = tem_chec+1;
            }
            else if(tem_chec%4 == 0)
            {
                p_res = tem_chec;
            }
        }
        else if(temp%2 == 0)
        {
                p_res = temp/2;
        }
        else
        {
                p_res = (temp/2)+1;

        }
        printf("Case %d: %d\n", i, p_res);
    }
    return 0;
}
