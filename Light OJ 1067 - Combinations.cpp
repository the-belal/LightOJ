
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mmod 1000003
#define pi acos(-1)
ll a[1000006];
void fact_cal()
{
    a[0]=1;
    for (int i=1;i<=1000000;i++)
    {
        a[i]=a[i-1]*i;
        a[i]%=mmod;
        //cout<<a[i]<<endl;
    }
}

ll bigmod(ll a, ll p, ll m)
{
    if(p==0)
        return 1%m;
    if(p%2!=0)
    {
        return ((a%m)*(bigmod(a,p-1,m)%m))%m;
    }
    else
    {
        ll x=(bigmod(a,p/2,m))%m;
        return (x*x)%m;
    }
}

int main ()
{
    faster;
    ll n,m,k,tc;
    //sieve();
    fact_cal();
    cin>>tc;
    for (int t=1;t<=tc;t++)
    {
        cin>>n>>k;
        ll ans;
        ll x=a[n],y=a[k],z=a[n-k];
        ans=x;
        ans=(ans*bigmod(y,mmod-2,mmod)%mmod)%mmod;
        ans=(ans*bigmod(z,mmod-2,mmod))%mmod;
        //printf("Case %d: %lld\n",t,ans);
        cout<<"Case "<<t<<": "<<ans<<endl;


    }

    return 0;
}
