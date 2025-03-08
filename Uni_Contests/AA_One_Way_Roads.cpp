// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 105;
vector<pair<int, int>> v[N]; // node, weight(cost) pair
int dis[N]; // dis-> distance
class cmp // creating a compare class for sorting
{ 
public: 
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second; // true or false, return korbeiiii 
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
            if (cost + childCost < dis[childNode])
            {
                // path relax
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]}); // dis[childNode] bola r (cost+childCost) bola ekh kotha
            }
        }
    }
}
void solve()
{
    int n, e;
    cin >> n; e = n;
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
    dijkstra(0);

    for (int i = 0; i < n; i++)
    {
        cout << i << "-> " << dis[i] << endl;
    }
    cout << nl;
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