// resolved from the editorial (the observation is every node has exactly two degree)
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
const int N = 2e5 + 5;
int parent1[N];
int parent2[N];
void dsu_initialize(int n)
{
    for (int i = 0; i <= n; i++)
    {
        parent1[i] = -1;
        parent2[i] = -1;
    }
}
int dsu_find1(int node)
{
    if(parent1[node] == -1) return node;
    int leader = dsu_find1(parent1[node]);
    parent1[node] = leader; // path compression
    return leader;
}
int dsu_find2(int node)
{
    if(parent2[node] == -1) return node;
    int leader = dsu_find2(parent2[node]);
    parent2[node] = leader; // path compression
    return leader;
}
void dsu_union1(int node1, int node2) 
{
    int leaderA = dsu_find1(node1); 
    int leaderB = dsu_find1(node2); 
    if(leaderA != leaderB) parent1[leaderA] = leaderB; 
}
void dsu_union2(int node1, int node2) 
{
    int leaderA = dsu_find2(node1); 
    int leaderB = dsu_find2(node2); 
    if(leaderA != leaderB) parent2[leaderA] = leaderB; 
}
int main()
{
    int n, e1, e2; cin >> n >> e1 >> e2;
    dsu_initialize(n); // step-1 : initialize the node with n
    
    int cntCycle = 0;
    while (e1--)
    {
        int u, v; cin >> u >> v;
        dsu_union1(u, v);
    }
    while (e2--)
    {
        int u, v; cin >> u >> v;
        dsu_union2(u, v);
    }


    return 0;
}