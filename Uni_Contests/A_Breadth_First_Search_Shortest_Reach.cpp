#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1e4+5; 
vector<int> v[N];
bool vis[N];
int level[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true; 
    level[src] = 0; // initialized src level with 0
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        // cout << par << endl; // priting in level order !
        for(int child : v[par]) 
        {
            if(!vis[child]) 
            {
                q.push(child); 
                vis[child] = true; 
                level[child] = level[par] + 1; // every child has parent, parent level pre-declared
            }
        }
    }
}
void solve()
{
    int n, e; cin >> n >> e;
    while (e--)
    {
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    memset(vis, false, sizeof(vis)); 
    memset(level, -1, sizeof(level));

    int src; cin >> src;
    bfs(src);

    for (int i = 1; i <= n; i++) // printing nodes(not level wise), mentioning their levels
    {
        // cout << "level of " << i << " is " << level[i] << endl;
        if(i == src) continue;
        if(level[i] == -1) cout << -1 << ' ';
        else cout << level[i] * 6 << ' ';
    }
    cout << nl;

    for (int i = 1; i <= n; i++) // huh... must
    {
        v[i].clear();
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}