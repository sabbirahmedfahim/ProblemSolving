#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];
int parentArr[N]; // tracking parent to detect two nodes(parent-children vise-verca) cycle (0)----(1)
int tot_cycle;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int parent = q.front();
        // cout << parent << endl;
        q.pop();
        for (int child : adj[parent])
        {
            // if child != parent & visited array : Cycle found! For the reason, we track parent
            if(vis[child] && parentArr[parent] != child)     // concentrate here
            {
                tot_cycle++;
                // return;
            }
            if (!vis[child])
            {
                vis[child] = true;
                parentArr[child] = parent; // *** in the parentArr, storing in child-th index the value of parent
                q.push(child);
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    set<int> bujtesinaBishoyeta;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);

        bujtesinaBishoyeta.insert(a);
        bujtesinaBishoyeta.insert(b);
    }
    memset(vis, false, sizeof(vis));
    memset(parentArr, -1, sizeof(parentArr));
    tot_cycle = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i]) 
        {
            // flag = false;
            bfs(i);
            // if(flag) tot_cycle++;
        }
    }

    tot_cycle /= 2; // since the graph is undirected, counts the cycles twice
    // cout << tot_cycle/2 << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << parentArr[i] << " ";
    // }
    
    if(tot_cycle == 1 && bujtesinaBishoyeta.size() == n) cout << "FHTAGN!";
    else cout << "NO";

    return 0;
}