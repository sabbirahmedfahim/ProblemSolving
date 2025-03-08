#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1E4+5;
vector<pair<int, int>> v[N]; // node, weight(cost) pair
int dis[N]; 
class cmp 
{ 
public: 
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int src) // O(logV(V+E)) -> O(VlogV + ElogV) -> O(VlogV + ElogE)
{
    priority_queue<pair<int, int>, vector < pair < int, int >>, cmp > pq; // represents priority queue (compare class added)
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int node = parent.first;  // AKA nodeVal or parentNode
        int cost = parent.second; // AKA parentCost
        for (pair<int, int> child : v[node]) // range based for loop
        {
            int childNode = child.first;
            int childCost = child.second;
            int mxEdgeCost = max(cost, childCost);
            if (mxEdgeCost < dis[childNode])
            {
                // path relax
                dis[childNode] = mxEdgeCost;
                pq.push({childNode, dis[childNode]}); // dis[childNode] bola r (cost+childCost) bola ekh kotha
            }
        }
    }
}
int cs = 1;
void solve()
{
    cout << "Case " << cs++ << ":" << nl;

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c; // c => cost
        cin >> a >> b >> c;
        v[a].push_back({b, c}); // as easy as you think. noting but an adj list
        v[b].push_back({a, c});
    }
    for (int i = 0; i < n; i++) // using for loop as memset not working properly
    {
        dis[i] = INT_MAX;
    }

    int src; cin >> src;
    dijkstra(src);

    for (int i = 0; i < n; i++)
    {
        if(dis[i] == INT_MAX) cout << "Impossible" << nl;
        else cout << dis[i] << nl;
    }
    // cout << nl;

    for (int i = 0; i < n; i++)
    {
        v[i].clear();
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}