// tried with DP and failed to implement, let's try BFS
#include <bits/stdc++.h>
using namespace std;
const int N = 1E6 + 5;
vector<int> adjList[N];
bool vis[N];
int level[N]; /* level == distance == cost */  
// int parent[N]; 
void bfs(int src, int des)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        if(node - 1 > 0 && !vis[node - 1])
        {
            q.push(node - 1);
            vis[node - 1] = true;
            level[node - 1] = level[node] + 1;
        }
        if(node < des && !vis[node * 2])
        {
            q.push(node * 2);
            vis[node * 2] = true;
            level[node * 2] = level[node] + 1;
        }

        if(vis[des] == true) return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int src, des; cin >> src >> des;

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    bfs(src, des);

    cout << level[des] << endl;

    return 0;
}