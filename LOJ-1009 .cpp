#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
 vector < ll > ad[20004];
 bool vis [ 20004 ];
 ll cost[20004];
 int bfs( int node )
 {
     queue < int > q;
     q.push( node );
     vis[node]=true;
     cost [node] = 0;
     int cnt[4];
     cnt[0]=1,cnt[1]=0;
     while ( !q.empty())
     {
         int x=q.front();
         q.pop();
         vis[x]=true;
         for (int i = 0; i < ad[x].size();i++)
         {
             int y=ad[x][i];
             if (vis[y]) continue;
             vis[y]=true;
             cost[y]=cost[x]+1;
             cnt[cost[y]%2]++;
             q.push(y);
         }

     }
     return max(cnt[0],cnt[1]);
 }
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tc;
    cin>>tc;
    for (int t=1;t<=tc;t++)
    {
        ll n; cin>>n;
        map<int , bool > mp;
        vector<int>a;
        for (int i=0;i<n;i++)
        {
            int u,v;
            cin>>u>>v;
            if (mp[u]==false) mp[u]=true,a.push_back(u);
            if (mp[v]==false) mp[v]=true,a.push_back(v);
            ad[u].push_back( v );
            ad[v].push_back(u);
        }
        cout<<"Case "<<t<<": ";
        ll ans=0;
        for (int i=0;i<a.size();i++)
        {
            if (!vis[a[i]])
            {
                ans+=bfs(a[i]);
            }
        }
        cout << ans << endl;
        for (int i=0;i<a.size();i++) ad[a[i]].clear(),vis[a[i]]=false;
    }

    return 0;

}

