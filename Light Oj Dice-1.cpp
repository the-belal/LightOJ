#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
#define PI 2*acos(0.0)
typedef long long ll;
int main ()
{
    //faster;
    ll i,n,sum,a[10];
    double x,p;
    ll t,tc;
    cin>>tc;
    for (t=1;t<=tc;t++)
    {
        cin>>x;
        p=(double) (4*x*x-PI*x*x);
        cout<<"Case "<<t<<": ";
        printf("%.2lf\n",p);


    }
    return 0;
}
