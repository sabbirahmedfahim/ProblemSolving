// i guess dfs is not suitable for the problem
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1e5+5; 
vector<int> v[N];
bool vis[N];
int level[N];
int parent[N];
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
                parent[child] = par;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, e; cin >> n >> e;
    int src, des; cin >> src >> des;

    while (e--)
    {
        int a, b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis, false, sizeof(vis)); 
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    bfs(src);

    int tmp = des;
    vector<int> path;
    bool isFound = false;
    while (tmp != -1)
    {
        if(tmp == src) 
        {
            isFound = true; path.push_back(src); break;
        }
        path.push_back(tmp);
        tmp = parent[tmp];
    }
    reverse(all(path));

    if(isFound == false)
    {
        cout << -1 << nl; return 0;
    }

    cout << path.size()-1 << nl;
    print(path);
    
    return 0;
}