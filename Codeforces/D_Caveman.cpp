#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 3E5 + 5;
bool vis[N];    
void dfs(int src, vector<int> adjList[])
{
    vis[src] = true;
    
    for (int child : adjList[src])
    {
        if(!vis[child]) 
        {
            dfs(child, adjList);
        }
    }
}
void solve()
{
    int n, e; cin>> n >> e;

    vector<int> adjList[n + 1];

    int mx = 0;
    while (e--)
    {
        int a, b; cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a); 
    }
    // memset(vis, false, sizeof(vis)); 
    for (int i = 1; i <= n; i++)
    {
        vis[i] = false;
    }
    
    dfs(1, adjList);
    
    for (int i = 1; i <= n; i++) 
    {
        if(!vis[i])
        {
            cout << "Brain Melt" << nl; return;
        }
    }

    vector<int> cntKoro;
    for (int i = 1; i <= n; i++)
    {
        cntKoro.push_back(adjList[i].size());
    }
    
    sort(all(cntKoro));

    if(cntKoro.back() == n - 1 && cntKoro[cntKoro.size() - 2] == 1)
    {
        cout << 2 << nl; return;
    }

    cout << "Many" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    
 
    return 0;
}