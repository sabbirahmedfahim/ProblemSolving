// https://cses.fi/problemset/task/1666/
#include <bits/stdc++.h>
using namespace std;
const int N = 1E5 + 5;
vector<pair<char, int>> adjList[N];
bool vis[N];
int level[N]; /* level == distance == cost */  
int parent[N]; 
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    // level[src] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto child : adjList[node]) // node == parent of child
        {
            if (vis[child.second] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[node] + 1; /* level == distance == cost */  
                parent[child] = node;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b; cin >> a >> b;
        if(a > 0) adjList[i].push_back({'L', a});
        if(b > 0) adjList[i].push_back({'R', b});
    }
    
    memset(vis, false, sizeof(vis));
    // memset(level, -1, sizeof(level));
    // memset(parent, -1, sizeof(parent));

    // bfs(src);

    /* PATH PRINTING */
    // int temp = des;
    // vector<int> path;
    // while (temp != -1)
    // {
    //     path.push_back(temp);
    //     temp = parent[temp];
    // }
    // reverse(path.begin(), path.end());
    // for (int val : path)
    // {
    //     cout << val << " ";
    // }

    return 0;
}