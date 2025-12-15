#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

const int N = 5e5 + 9;

int parent[N];
int rank_[N];
int group_size[N];
int components;

vector<int> adj[N];

void dsu_initialize(int n)
{
    components = n;
    for (int i = 0; i <= n; i++)
    {
        parent[i] = i;
        rank_[i] = 0;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == node)
        return node;
    return parent[node] = dsu_find(parent[node]);
}

bool dsu_same(int u, int v)
{
    return dsu_find(u) == dsu_find(v);
}

int dsu_get_size(int node)
{
    int leader = dsu_find(node);
    return group_size[leader];
}

int dsu_num_components()
{
    return components;
}

int dsu_merge(int u, int v)
{
    int leader_u = dsu_find(u);
    int leader_v = dsu_find(v);

    if (leader_u == leader_v)
        return -1;

    components--;

    if (rank_[leader_u] > rank_[leader_v])
        swap(leader_u, leader_v);

    parent[leader_u] = leader_v;
    group_size[leader_v] += group_size[leader_u];

    if (rank_[leader_u] == rank_[leader_v])
        rank_[leader_v]++;

    return leader_v;
}

int main()
{
    // ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m;
    // cin >> n >> m;
    scanf("%d%d", &n, &m);

    dsu_initialize(n);

    while (m--)
    {
        int howMany; 
        // cin >> howMany;
        scanf("%d", &howMany);
        if(howMany == 0) continue;

        int u, v;
        // cin >> u;
        scanf("%d", &u);
        howMany--;
        for (int i = 0; i < howMany; i++)
        {
            // cin >> v;
            scanf("%d", &v);
            dsu_merge(u, v);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        // cout << dsu_get_size(i) << " ";
        printf("%d ", dsu_get_size(i));
    }
    
    
    return 0;
}