#include <bits/stdc++.h>
using namespace std;
const int N = 1E5 + 5;
vector<int> adjList[N];
bool vis[N];
// int level[N]; /* level == distance == cost */  
int parent[N]; 
void bfs(int src, int n)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    // level[src] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int child : adjList[node]) // node == parent of child
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                // level[child] = level[node] + 1; /* level == distance == cost */  
                parent[child] = node;

                if(child == n) return;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    // int src, des;
    // cin >> src >> des;
    
    memset(vis, false, sizeof(vis));
    // memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    bfs(1, n);

    if(vis[n] == false)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    /* PATH PRINTING */
    int tmp = n;
    vector<int> path;
    while (tmp != -1)
    {
        path.push_back(tmp);
        tmp = parent[tmp];
    }
    reverse(path.begin(), path.end());

    cout << path.size() << endl;
    for (int val : path)
    {
        cout << val << " ";
    }

    return 0;
}