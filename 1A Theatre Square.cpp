#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a,x,y;
    cin >> n >> m >> a;
    if(n%a==0)
    {
        x=n/a;
    }
    else
    {
        x=n/a;
        ++x;
    }
    if(m%a==0)
    {
        y=m/a;
    }
    else
    {
        y=m/a;
        ++y;
    }
    cout << x*y <<endl;
}
