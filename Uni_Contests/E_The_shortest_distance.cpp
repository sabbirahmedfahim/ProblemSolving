// i guess dfs is not suitable for the problem
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
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, src; cin >> n >> src;
    
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
    memset(level, -1, sizeof(level));
    bfs(src);
    

    for (int i = 1; i <= n; i++) // printing nodes(not level wise), mentioning their levels
    {
        // cout << "level of " << i << " is " << level[i] << endl;
        cout << level[i] << ' ';
    }
    cout << nl;

    return 0;
}