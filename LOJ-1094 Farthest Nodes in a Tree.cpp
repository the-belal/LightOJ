#include<bits/stdc++.h>
using namespace std;
//#define endl '\n'
typedef long long ll;
vector< pair<int,int> >ad[30004];
bool vis[30004];
ll mx;
ll dfs(int node)
{
    vector<ll>v;
    for (int i=0; i<ad[node].size();i++)
    {

        int y=ad[node][i].first;
        if (vis[y]) continue;
        vis[y]=true;
        ll val=ad[node][i].second+dfs(y);
        v.push_back(val);
        //cout<<" bal "<<val<<endl;

    }
    if (v.size()==1)
    {
        mx=max(mx,v[0]);
        return v[0];
    }
    if (v.size()==0) return 0;

    sort(v.begin(),v.end(),greater<ll>());
    mx=max(mx,v[0]+v[1]);
    return v[0];
}
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    ll tc;
    cin>>tc;
    for (int t=1;t<=tc;t++)
    {
        ll n;
        cin>>n;
        mx=0;
        for (int i=0;i<n-1;i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            ad[u].push_back(make_pair(v,w));
            ad[v].push_back(make_pair(u,w));
        }
        vis[0]=true;
        dfs(0);
        cout<<"Case "<<t<<": "<<mx<<endl;
        for (int i=0;i<n;i++) ad[i].clear(),vis[i]=false;
    }
    return 0;
}
