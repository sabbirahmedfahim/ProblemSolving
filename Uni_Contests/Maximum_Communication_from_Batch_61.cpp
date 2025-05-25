#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> v[N];
bool vis[N];
int cnt = 0;
void dfs(int src) 
{
    vis[src] = true; 
    // cout << src << endl;
    cnt++;
    
    for (int child : v[src])
    {
        if(!vis[child]) 
        {
            dfs(child); 
        }
    }
}

int main()
{
    int n, src, e; cin >> n >> src >> e;

    while (e--)
    {
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a); // undirected graph
    }
    memset(vis, false, sizeof(vis)); 

    dfs(src);

    cnt--;
    cout << cnt << endl;

    return 0;
}