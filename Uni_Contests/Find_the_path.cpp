#include <bits/stdc++.h>
using namespace std;
const int N = 1E5 + 7;
vector<pair<int, int>> v[N];
const int inf = 1E6 + 6;
int dist[N]; /* dist == cost */
int parent[N]; // track parent node
void dijkstra(int source) // O(logV(V+E)) -> O(VlogV + ElogV) -> O(VlogV + ElogE)
{
    /* PUSH {COST, SOURCE}, NOT {source, cost} *** */
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // Min-heap by default
    pq.push({0, source});
    dist[source] = 0;
    parent[source] = -1; // track parent node
    while (!pq.empty())
    {
        pair<int, int> par = pq.top();
        pq.pop();
        int cost = par.first; // or parentCost
        int node = par.second;  // or parentNode
        for (pair<int, int> child : v[node]) // range based for loop
        {
            int childNode = child.first; // don't confuse, we took input as {node, cost} format
            int childCost = child.second; // don't confuse, we took input as {node, cost} format
            if (cost + childCost < dist[childNode])
            {
                // path relax
                dist[childNode] = cost + childCost;
                parent[childNode] = node; // track parent node
                pq.push({dist[childNode], childNode}); // {COST, SOURCE}
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c; // c => cost
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c}); // undirected
    }
    
    // memset(dist, inf, sizeof(dist));
    for (int i = 0; i < N; i++)
    {
        dist[i] = inf;
    }
    
    memset(parent, -1, sizeof(parent)); // parent tracking

    int source, destination; cin >> source >> destination;
    dijkstra(source);

    int tmp = destination;
    vector<int> path;
    while (tmp != -1) 
    {
        path.push_back(tmp);
        tmp = parent[tmp];
    }
    
    if(dist[destination] == inf)
    {
        cout << -1 << endl; return 0;
    }
    reverse(path.begin(), path.end());

    // shortest path
    cout << dist[destination] << endl;
    for(auto e : path) cout << e << " "; cout << endl;

    return 0;
}