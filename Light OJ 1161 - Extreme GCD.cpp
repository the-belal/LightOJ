#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 1000002
bool a[mx];
//vector<ll>prime;
ll sieve ()
{
    ll i,j,r;
    r=sqrt(mx);
    for (i=4;i<=mx;i+=2)
        a[i]=true;
    for (i=3;i<=r;i+=2)
    {
        if (a[i]==false)
        for (j=i;i*j<=mx;j+=1)
            a[i*j]=true;
    }
}
ll mob[mx];
ll mobious ()
{
    ll i,j,n,m;
    for (i=1;i<=mx;i++)
    {
        mob[i]=1;
    }
    for (i=2;i<=mx;i++)
    {
        if (a[i]==false)
        {
            mob[i]=-1;
            for (j=i+i;j<=mx;j+=i)
            {
                if (j%(i*i)==0)
                    mob[j]=0;
                else
                    mob[j]=-1*mob[j];
            }
        }
    }
}



ll ar[mx],d[mx];
ll CPascal(ll n , ll k) {
    ll v = 1;
    for (ll i = 1; i <= k; i++)
        v = v * (n + 1 - i) / i;
    return v;
}
 int main()
 {
     ll tc,i,j,n,ans,sum,r,t;
     sieve();
    mobious();
    scanf("%lld",&tc);
     for (t=1;t<=tc;t++)
     {
         memset(d,0,sizeof(d));
         scanf("%lld",&n);
         ll maxi=-1;
         for (i=0;i<n;i++)
         {
             scanf("%lld",&ar[i]);
             maxi=max(maxi,ar[i]);
             r=sqrt(ar[i]);
             ll num=ar[i];
             d[num]++;
             for (j=2;j<=r;j++)
             {
                 if (num%j==0)
                 {
                     d[j]++;
                     if (num/j!=j)
                       d[num/j]++;
                 }
             }
         }
         sum=CPascal(n,4);
         for (i=2;i<=maxi;i++)
         {
             sum=sum+(mob[i]*CPascal(d[i],4));
         }
         printf("Case %lld: %lld\n",t,sum);
     }
     return 0;
 }
