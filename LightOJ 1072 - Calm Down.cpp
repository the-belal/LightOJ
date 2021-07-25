
#include<bits/stdc++.h>
using namespace std;
typedef long ll;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mmod 1000000007
#define pi acos(-1)
double fun (double R, double n)
{
    double low=0,high=R,ans=0,md;
    int t=500;
    while (t--)
    {
        md=(double) (low+high)*1.0/2.0;

        double ang=(double) ((2.0*(R-md)*(R-md))-((2*md)*(2*md)));

        ang= (double) ang*1.0/(2.0*(R-md)*(R-md))*1.0;
        //cout<<"p "<<ang<<endl;
        ang= (double) acos(ang*1.0);
        ang=(ang*360)/(2*pi*1.0);
        //cout<<ang<<' '<<md<<endl;
        if  ((ang*n)>=360)
        {

            high=md;
            ans=md;
            //cout<<ang<<' '<<ans<<endl;

        }
        else
            {
            low=md;
            }
    }
        return ans;
}
int main ()
{
    int tc;
    cin>>tc;
    for (int t=1;t<=tc;t++)
    {
        double R,n;
        cin>>R>>n;
        double r=fun(R,n);
        //double d=0.994376;
        //r=acos(d)*360/(2*pi);
        printf("Case %d: %.10lf\n",t,r);
    }
    return 0;
}
