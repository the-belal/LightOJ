#include<bits/stdc++.h>
using namespace std;
#define mx 5000002
typedef unsigned long long ll;
bool a[mx],len;
ll sq[mx];
void sieve()
{
    ll r,i,j,n;
    for (i=1;i<=mx;i++)
    {
        sq[i]=i;
    }
    for (i=2;i<=mx;i++)
    {
        if (sq[i]==i)
       {
           sq[i]=i-1;
            for (j=i+i;j<=mx;j+=i)
        {
            sq[j]=((i-1)*sq[j])/i;
        }
       }
    }
    sq[1]=1;
    for (i=2;i<=mx;i++)
    {
        sq[i]=sq[i-1]+sq[i]*sq[i];
    }
}
int main ()
{
    ll i,j,ans,l,r,tc,t;
    sieve();
    scanf("%llu",&tc);
    for (t=1;t<=tc;t++)
    {
        scanf("%llu%llu",&l,&r);
        printf("Case %llu: %llu\n",t,sq[r]-sq[l-1]);

    }
    return 0;
}
