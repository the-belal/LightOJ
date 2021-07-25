#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1005],dp[1005][1005],n;
 bool chk(ll posi)
 {
     ll i,j,r;
     ll rem=i%n;
    //rem=rem;
    for (i=posi-rem+1;i<=posi+n-rem;i++)
     if (a[i]==1)
        return false;
     for (i=1;i<=n*n;i++)
     {
         if (posi%n==i%n && a[i]==1)
            return false;


     }
     return true;

 }
ll fun (ll posi, ll baki)
{
    ll i,j,m;
    if (baki==0)
        return 1;
    if (posi==n+1)
        return 0;
    if (dp[posi][baki]!=-1)
        return dp[posi][baki];
    ll ans=0,res=0,res2=0;
    if (a[posi]==0)
    if (chk(posi)==true)
    {
        a[posi]=1;
        ans= fun(posi+1,baki-1);
        res2=fun(posi+1,baki);
        a[posi]=0;
    }
    res=fun(posi+1,baki);

    return dp[posi][baki]=ans+res+res2;
}
int main ()
{
    ll i,j,m,ans,tc,t,sum;
    scanf("%lld",&tc);
    for (t=1;t<=tc;t++)
    {
        memset(dp,-1,sizeof(dp));
        scanf("%lld%lld",&n,&m);
        sum=0;
  ans=fun(1,m);
            //sum+=ans;
        printf("Case %lld: %lld\n",t,ans);
    }
    return 0;
}
