#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1e4+5; 
vector<int> v[N];
bool vis[N];
int cnt = 0;
void dfs(int src) // when ur job is to randomly traverse the graph :p
{
    cnt++;
    // cout << src << " ";
    vis[src] = true;
    for (int child : v[src])
    {
        if(!vis[child]) dfs(child); 
    }
}
int main()
{
    int n, e; cin>> n >> e;
    while (e--)
    {
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis)); 
    dfs(1);

    if(cnt == n) cout << "YES" << nl;
    else cout << "NO" << nl;

    return 0;
}