#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,l,i,cn;
    char w[105];
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        cin >> w;

        l=strlen(w);
        if(l<=10)
        {
            cout << w <<endl;

        }

        else
        {
            cn=l-2;
           cout << w[0] << cn << w[l-1] <<endl;
        }
    }
}

