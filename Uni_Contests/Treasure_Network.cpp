#include <bits/stdc++.h> 
#define ll long long
#define nl '\n'
using namespace std;
/* DSU cycle detection  ___start */
const int N = 1e5 + 5;
int parent[N];
int group_size[N]; 
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
int dsu_find(int node)
{
    if(parent[node] == -1) return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader; // path compression
    return leader;
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(leaderA == leaderB) return;
    if(group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB]; 
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    } 
}
/* DSU cycle detection ___end */

class Edge
{
public:
    int u, v, w; // w for weight
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n); // initialized with n
    vector<Edge> edgeList;
    vector<tuple<int, int, int>> tmp;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        // edgeList.push_back((Edge(u, v, w)));
        tmp.push_back({u, v, w});
    }
    
    int toDel; cin >> toDel;
    set<pair<int, int>> st;
    while (toDel--)
    {
        int u, v; cin >> u >> v;
        st.insert({u, v});
    }
    
    for (int i = 0; i < tmp.size(); i++)
    {
        auto[u, v, w] = tmp[i];
        if(st.count({u, v})) continue;

        edgeList.push_back((Edge(u, v, w)));
    }

    sort(edgeList.begin(), edgeList.end(), cmp); 
    int totalCost = 0; // store costs
    for (Edge ed : edgeList)
    {
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);
        if(leaderU == leaderV) continue;
        else
        {
            dsu_union_by_size(ed.u, ed.v);
            totalCost += ed.w;
        } 
    }

    if(dsu_find(1) == dsu_find(n)) cout << totalCost;
    else cout << -1 << nl;

    return 0;
}