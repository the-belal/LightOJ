#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long ll;
int main ()
{
    faster;
    int i,j,n,m,maxi,mini,dif_maxi,d,tc,t,a[100005];
    cin>>tc;
    for (t=1; t<=tc; t++)
    {
        cin>>n>>d;
        for (i=0; i<n; i++)
            cin>>a[i];
        deque<int>dq;
        deque<int>q;
        dq.push_back(a[0]);
        q.push_back(a[0]);
        for (i=1; i<d; i++)
        {
            while(!dq.empty() && dq.front()<a[i])
            {
                dq.pop_front();
            }
            dq.push_front(a[i]);
            while(!q.empty() && q.front()>a[i])
            {
                q.pop_front();
            }
            q.push_front(a[i]);
        }
        maxi=dq.back();
        mini=q.back();
        dif_maxi=maxi-mini;
        for (i=d; i<n; i++)
        {
            while(!dq.empty() && dq.front()<a[i])
            {
                dq.pop_front();
            }
            dq.push_front(a[i]);
            if (a[i-d]==dq.back())
            {
                dq.pop_back();
            }
            while(!q.empty() && q.front()>a[i])
            {
                q.pop_front();
            }
            q.push_front(a[i]);
            if (a[i-d]==q.back())
            {
                q.pop_back();
            }


            maxi=dq.back();
            mini=q.back();
            dif_maxi=max((maxi-mini),dif_maxi);
        }
        cout<<"Case "<<t<<": "<<dif_maxi<<'\n';
        q.clear();
        dq.clear();
    }
    return 0;
}
