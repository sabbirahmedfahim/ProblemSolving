#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
const int N = 5e5 + 5;
int parent[N];
int group_size[N]; // using DSU union by size. i can also detect cycle using union by rank
void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
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

    if(leaderA == leaderB) return; // Got MLE for skipping the condition !!

    if(group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA]+=group_size[leaderB]; // do not forget to increase the size
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB]+=group_size[leaderA];
    } 
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, e; cin >> n >> e;
    dsu_initialize(n); // step-1 : initialize the node with n

    while (e--)
    {
        int x; cin >> x;
        vector<int> v(x + 1); 
        if(x == 0) continue;
        for (int i = 1; i <= x; i++)
        {
            cin >> v[i];
        }
        
        for (int i = 2; i <= x; i++) 
        {
            dsu_union_by_size(v[i-1], v[i]);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        int leader = dsu_find(i);
        cout << group_size[leader] << " ";
    }
    cout << nl;

    return 0;
}