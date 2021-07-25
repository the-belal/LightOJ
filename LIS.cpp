#include<bits/stdc++.h>
using namespace std;
#define mx 100005
int a[mx],n,dp[mx];
int LIS (int i,int j)
{
    if (i>n)
        return 0;
    if (dp[i]!=-1)
        return dp[i];
        int ret1=-1,ret2=-1;
        if (a[i]>a[i-1])
        {
            ret1=1+LIS(i+1);
        }
}
int main ()
{
    int m;
    while (scanf("%d",&n)==1)
    {
        memset(dp,-1,sizeof(dp));
        a[0]=999999;
        for (int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
    }
}
