#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 5e5 + 9;

struct DSU {
    int parent[N], rank_[N], group_size[N], components;

    void dsu_initialize(int n) // O(n)
    {
        components = n;
        for (int i = 0; i <= n; i++) parent[i] = i, rank_[i] = 0, group_size[i] = 1;
    }

    int dsu_find(int node) // O(alpha(n))
    {
        if (parent[node] == node) return node;
        return parent[node] = dsu_find(parent[node]);
    }

    bool dsu_same(int u, int v) // O(alpha(n))
    {
        return dsu_find(u) == dsu_find(v);
    }

    int dsu_get_size(int node) // O(alpha(n))
    {
        int leader = dsu_find(node);
        return group_size[leader];
    }

    int dsu_num_components() // O(1)
    {
        return components;
    }

    int dsu_merge(int u, int v) // O(alpha(n))
    {
        int leader_u = dsu_find(u), leader_v = dsu_find(v);
        if (leader_u == leader_v) return -1;
        components--;

        if (rank_[leader_u] > rank_[leader_v]) swap(leader_u, leader_v);
        parent[leader_u] = leader_v;
        group_size[leader_v] += group_size[leader_u];

        if (rank_[leader_u] == rank_[leader_v]) rank_[leader_v]++;
        return leader_v;
    }
};

int n, q;

void solve()
{
    DSU dsu;
    dsu.dsu_initialize(n);
    map<string, int> mp; // names with custom id
    int id = 1;

    while (n--)
    {
        string x; cin >> x;
        if(!mp.count(x)) mp[x] = id++;
    }

    int mx = 1;
    while (q--)
    {
        string x, y; cin >> x >> y;
        if(!mp.count(x)) mp[x] = id++;
        if(!mp.count(y)) mp[y] = id++;

        dsu.dsu_merge(mp[x], mp[y]);

        mx = max(mx, dsu.dsu_get_size(mp[x]));
        // cout << dsu.dsu_get_size(mp[x]) << nl;
    }
    cout << mx << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    while (cin >> n >> q)
    {
        if(n == 0 && q == 0) break;
        solve();
    }


    return 0;
}