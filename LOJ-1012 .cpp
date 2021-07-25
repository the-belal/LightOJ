
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
 bool vis [25][25];
 ll r,c;
 string st[30];
 void dfs(int i, int j)
 {
     if (i>=r || j>=c || i<0 || j<0) return ;
     if (st[i][j]=='#') return ;
     vis[i][j]=true;
     if (vis[i][j+1]==false)
     dfs(i,j+1);
     if (vis[i][j-1]==false)
     dfs(i,j-1);
     if (vis[i+1][j]==false)
     dfs(i+1,j);
     if (vis[i-1][j]==false)
     dfs(i-1,j);
     return ;
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
        cin>>c>>r;

        for (int i=0;i<r;i++) cin>>st[i];

        for (int i=0;i<r;i++)
        {
            for (int j=0;j<c;j++)
            {
                if (st[i][j]=='@')
                {
                    vis[i][j]=true;
                    dfs(i,j);
                    break;
                }
            }
        }
        ll cnt=0;
        for (int i=0;i<r;i++)
            for (int j=0;j<c;j++) if (vis[i][j]) cnt++, vis[i][j]=false;

        cout<<"Case "<<t<<": "<<cnt<<endl;
    }

    return 0;

}

