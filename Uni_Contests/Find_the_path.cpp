#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 2E5 + 5;
const int inf = 1E6;
vector<pair<int, int>> adjList[N];
int dis[N];
int parent[N];
void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty())
    {
        int node = pq.top().second;
        int cost = pq.top().first;
        pq.pop();
        for(auto child : adjList[node])
        {
            int childNode = child.first;
            int childCost = child.second;
            if(dis[node] + childCost < dis[childNode])
            {
                dis[childNode] = dis[node] + childCost;
                parent[childNode] = node;
                
                pq.push({dis[childNode], childNode});
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, e; cin >> n >> e;
    while (e--)
    {
        int u, v, w; cin >> u >> v >> w;
        adjList[u].push_back({v, w});
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = inf;
    }
    memset(parent, -1, sizeof(parent));

    int src, des; cin >> src >> des;
    dijkstra(src);

    if(dis[des] == inf)
    {
        cout << -1 << nl; return 0;
    }

    int tmp = des;
    vector<int> path;
    while (tmp != -1)
    {
        path.push_back(tmp);
        tmp = parent[tmp];
    }
    reverse(all(path));
    cout << dis[des] << nl;
    print(path);

    return 0;
}