#include<stdio.h>
int main()
{
    long long n,i,j,cnt=0,fc=0;
    scanf("%lld",&n);
    long long a[n+5][5];
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=3;++j)
        {
            scanf("%lld",&a[i][j]);
        }
    }

    for(i=1;i<=n;++i)
    {
        for(j=1;j<=3;++j)
        {
            if(a[i][j]==1)
              ++cnt;
        }
         if(cnt>=2)
        {
            ++fc;
        }
        cnt=0;
    }
    printf("%lld\n",fc);
    return 0;


}
