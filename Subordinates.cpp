// used test cases
#include <bits/stdc++.h>
using namespace std;
const int N = 2E5 + 5;
vector<int> adjList[N];
bool vis[N];
int level[N]; /* level == distance == cost */  
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
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int x; cin >> x;
        adjList[i].push_back(x);
    }
    
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    for (int i = n; i >= 2; i--)
    {
        if(!vis[i]) bfs(i);
    }
    
    cout << n - 1 << " ";
    for (int i = 2; i <= n; i++)
    {
        cout << level[i] << " ";
    }
    

    return 0;
}