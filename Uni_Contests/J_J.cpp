#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
const int N = 2e5 + 5;
int parent[N];
int group_size[N]; // using DSU union by size. i can also detect cycle using union by rank
void dsu_initialize(int n)
{
    for (int i = 0; i <= n; i++)
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
int main()
{
    int n, e; cin >> n >> e;
    dsu_initialize(n); // step-1 : initialize the node with n

    while (e--)
    {
        int cmd, node1, node2; cin >> cmd >> node1 >> node2;

        if(cmd == 0)
        {
            if(dsu_find(node1) == dsu_find(node2)) continue;
            dsu_union_by_size(node1, node2);
        }
        else 
        {
            if(dsu_find(node1) == dsu_find(node2)) cout << 1 << nl; // check whether leaderA && leaderB are same or not
            else cout << 0 << nl;
        }
    }

    return 0;
}