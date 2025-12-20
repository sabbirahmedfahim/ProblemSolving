// resolved from the editorial/TLE eliminators
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E5 + 5;
vector<int> adjList[N];
bool vis[N];    
int color[N];
void dfs(int src, int col)
{
    vis[src] = true;
    color[src] = col;
    
    for (int child : adjList[src])
    {
        if(!vis[child]) 
        {
            dfs(child, col ^ 1);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, e; cin>> n;
    e = n - 1;
    while (e--)
    {
        int a, b; cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a); 
    }
    memset(vis, false, sizeof(vis)); 

    dfs(1, 0);
    int l = 0, r = 0;

    for (int i = 1; i <= n; i++)
    {
        if(color[i] == 0) l++;
        else r++;
    }
    // cerr << l << " " << r << endl;
    cout << (1ll * l * r) - (n - 1) << endl;

 
    return 0;
}