#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005]; /* level == distance == cost */  
int parent[1005]; // parent, par variable are different
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1; /* level == distance == cost */  
                parent[child] = par; // parent, par variable are different
            }
        }
    }
}
void solve()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    int src; cin >> src;
    bfs(src);
    
    for (int i = 1; i <= n; i++)
    {
        if(i == src) continue;
        if(!vis[i]) cout << -1 << " ";
        else cout << level[i] * 6 << " ";
    }
    cout << endl;

    for(auto &x : v)
    {
        x.clear();
    }
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}