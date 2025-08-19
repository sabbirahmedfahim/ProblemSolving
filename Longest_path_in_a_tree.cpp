#include <bits/stdc++.h>
using namespace std;
const int N = 1E5 + 5;
vector<int> adjList[N];
bool vis[N];
int level[N]; /* level == distance == cost */  
// int parent[N]; 
int src2;
int mxLevel = 0;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

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
                level[child] = level[node] + 1; /* level == distance == cost */  
                // parent[child] = node;

                if(level[child] > level[node]) 
                {
                    src2 = child;
                    mxLevel = level[child];
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, e;
    cin >> n; e = n - 1;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    // memset(parent, -1, sizeof(parent));

    bfs(1);

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    // memset(parent, -1, sizeof(parent));

    bfs(src2);

    cout << mxLevel << endl;

    return 0;
}