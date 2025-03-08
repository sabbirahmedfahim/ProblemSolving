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
    // cout << src << " ";
    cnt++;
    vis[src] = true;
    for (int child : v[src])
    {
        if(!vis[child]) dfs(child); 
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, x; cin >> n >> x;
    
    // adjacency matrix to adj. list
    int mat[n+1][n+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> mat[i][j];
        }
    }

    // vector<int> v[n+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(mat[i][j] == 1) v[i].push_back(j); 
        }
    }

    memset(vis, false, sizeof(vis)); 
    dfs(x);

    cout << cnt << nl;

    return 0;
}