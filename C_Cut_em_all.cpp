#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E5 + 5;
vector<int> adjList[N];
bool vis[N];
int level[N]; /* level == distance == cost */  
int parent[N]; 
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
                parent[child] = node;

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

    if(n & 1)
    {
        cout << -1 << nl; return 0;
    }
    
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    // memset(parent, -1, sizeof(parent));

    bfs(1);

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    bfs(src2);

    // cout << mxLevel << endl;

    /* PATH PRINTING */
    int tmp = src2;
    vector<int> logestPath;
    while (tmp != -1)
    {
        logestPath.push_back(tmp);
        tmp = parent[tmp];
    }
    reverse(logestPath.begin(), logestPath.end());
    
    // print(logestPath);

    int curr = 0, ans = 0;
    for (int i = 0; i < logestPath.size(); i++)
    {
        if(i == 0 || i == logestPath.size() - 1)
        {
            if(adjList[logestPath[i]].size() == 1) curr++;
            else curr += adjList[logestPath[i]].size();
        }
        else 
        {
            if(adjList[logestPath[i]].size() == 2) curr++;
            else curr += adjList[logestPath[i]].size() - 1;
        }

        if(curr % 2 == 0 && i < logestPath.size() - 1)
        {
            ans++;
            curr = 0;
        }
    }
    cout << ans << nl;

    return 0;
}