#include<bits/stdc++.h>

using namespace std;

struct timing
{
    int start;
    int finish;

};

bool compare( timing a,timing b){
        if(a.start<b.start)
        {
            return true;
        }
        else if(a.start==b.start){
            return a.finish>b.finish;
        }
        else return false;

}


/*bool compare2( timing a,timing b){
        return a.start<b.start;

}*/

int main()
{
        struct timing arr[50000];
        struct timing arr2[100000];
        int tst,O,j,k,l=1,i,cou=1,res,sum;

        cin>>tst;
        for(j=0;j<tst;j++)
    {
        cin>>k;
        for( i=0;i<k;i++)
        {

        cin>>arr[i].start;
        cin>>arr[i].finish;

        }
       sort(arr,arr+k,compare);


       for( i=0,O=(2*k)-1;O>i;i++)
       {
        arr2[i].start=arr[i].start;
        arr2[i].finish=1;
        arr2[O].start=arr[i].finish;
        arr2[O].finish=-1;
        O--;
       }
        sort(arr2,arr2+(k*2),compare);



        for(i=sum=res=0; i<2*k ;i++)
        {
            sum += arr2[i].finish;
            if(sum > res)
                res = sum;
        }

            cout<<"Case "<<cou<<": "<<res<<endl;
            cou++;

    }


   return 0;

}
