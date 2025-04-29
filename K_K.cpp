#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
const int N = 1e5 + 5;
int parent[N];
void dsu_initialize()
{
    for (int i = 0; i < N; i++)
    {
        parent[i] = -1;
    }
}
int dsu_find(int node)
{
    if(parent[node] == -1) return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader; // path compression
    return leader;
}
void dsu_union(int node1, int node2) 
{
    int leaderA = dsu_find(node1); 
    int leaderB = dsu_find(node2); 
    if(leaderA != leaderB) parent[leaderA] = leaderB; 
}
int cs = 1;
void solve()
{
    cout << "Case " << cs++ << ":" << nl;

    int n, queries; cin >> n >> queries;
    dsu_initialize(); // step-1 : initialize the node with n
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    
    while (queries--)
    {
        int cmd; cin >> cmd;
        if(cmd == 1)
        {
            int x, y; cin >> x >> y;
            dsu_union(x, y);
        }
        else 
        {
            int idx; cin >> idx; // 1-based
            int data = dsu_find(a[idx]);
            cout << data << nl;
        }
    }
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}