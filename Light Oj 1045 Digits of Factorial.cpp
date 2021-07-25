#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double a[1000005];
int main ()
{
    ll i,n,base,tc,t;
    double sum=0;
    a[0]=1;
    for (i=1;i<=1000000;i++)
    {
        sum+=log10(i);
        a[i]=sum;
    }
    cin>>tc;
    for (t=1;t<=tc;t++)
    {
        cin>>n>>base;
        sum=0;
        sum= (double) (a[n]/(log10(base)));
        printf("Case %lld: ",t);
        cout<<int (sum)+1<<endl;
    }
    return 0;
}
