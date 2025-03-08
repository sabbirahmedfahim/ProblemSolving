// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1e3 + 5;
vector<int> vec[N];
bool vis[N];
void dfs(int src) // when ur job is to randomly traverse the graph :p
{
    // cout << src << " ";
    vis[src] = true; // tracking
    for (int child : vec[src])
    {
        if(!vis[child]) dfs(child); // recursive solution. it's amazing
    }
}
// ################################################# copy-paste DSU cycle detection 
// const int N = 1e5 + 5;
vector<int> parent(N);
vector<int> group_size(N); // using DSU union by size. i can also detect cycle using union by rank
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
    if(group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA]+=group_size[leaderB]; // do not forget to increase the size
    }
    else
    {
        parent[leaderA] = leaderB;
        // group_size[leaderA]+=group_size[leaderB]; // WRONG
        group_size[leaderB]+=group_size[leaderA];
    } 
}
// ################################################# copy-paste done
// mst -> Minimum Spanning Tree
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
int cs = 1;
void solve()
{
    cout << "Case " << cs++ << ": ";
    int n, e;
    cin >> n >> e;
    dsu_initialize(n); // initialized with n
    vector<Edge> edgeList;
    set<int> s;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back((Edge(u, v, w)));

        s.insert(u); s.insert(v);
        vec[u].push_back(v); vec[v].push_back(u);
    }

    if(!s.count(1) || !s.count(n)) // edge case-1
    {
        cout << "Impossible" << nl;
        parent.clear();
        group_size.clear(); 
        for (int i = 0; i < N; i++)
        {
            vec[i].clear();
        }
        return;
    }

    memset(vis, false, sizeof(vis)); // initialized vis with false
    dfs(1);
    if(!vis[n]) // edge case-2
    {
        cout << "Impossible" << nl; 
        parent.clear();
        group_size.clear(); 
        for (int i = 0; i < N; i++)
        {
            vec[i].clear();
        }
        return;
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
            totalCost+=ed.w;
        } 
    }
    cout << totalCost << nl;

    parent.clear();
    group_size.clear();
    for (int i = 0; i < N; i++)
    {
        vec[i].clear();
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