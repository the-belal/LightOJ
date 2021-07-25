#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll i,j,n,x,y,low,high;
    ll tc,t;
    cin>>tc;
    for (t=1;t<=tc;t++)
    {
        cin>>n;
        low=sqrt(n);
        high=low+1;

        if (low*low==n)
            high=low;
            ll dif = high*high-n;
        x=1;
        y=1;
        if (high%2==0)
        {
            x=high;
            if (dif>=high)
                x=high-(high*high-high+1-n);
            y=min(dif+1,high);


        }
        else
            {
            y=high;
            if (dif>=high)
                y=high-(high*high-high+1-n);
            x=min(dif+1,high);


        }

        printf("Case %lld: ",t);
        cout<<x<<' '<<y<<endl;
    }
return 0;
}
