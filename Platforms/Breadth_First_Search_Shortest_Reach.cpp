#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E4 + 5;
vector<int> adjList[N];
int parent[N];
bool vis[N];
int level[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    level[src] = 0;
    vis[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for(auto child : adjList[par])
        {
            if(!vis[child])
            {
                q.push(child);

                vis[child] = true;
                parent[par] = child;
                level[child] = level[par] + 1;
            }
        }
    }
    
}
void solve()
{
    int n, e; cin >> n >> e;
    while (e--)
    {
        int u, v; cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    memset(level, -1, sizeof(level));

    int src; cin>> src;
    bfs(src);
    for (int i = 1; i <= n; i++)
    {
        if(i == src) continue;
        if(!vis[i]) cout << -1 << " ";
        else cout << level[i] * 6 << " ";
    }
    cout << nl;

    for(auto &e : adjList)
    {
        e.clear();
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin>> t; 
    while (t--)
    {
        solve();
    }
    

    return 0;
}