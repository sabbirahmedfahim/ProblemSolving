// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 4E4 + 5;
vector<int> adjList[N], adjList2[N];
bool vis[N];  
pair<int, int> WB[N];
string s;
bool addedContribution[N];

int prevW, prevB;
void dfs(int src)
{
    vis[src] = true;
    if(s[src - 1] == 'W') WB[src].first++, WB[src].first += prevW;
    else WB[src].second++, WB[src].second += prevW;
    // prevW = WB[src].first, prevB = WB[src].second;

    for (int child : adjList2[src])
    {
        if(!vis[child]) 
        {
            dfs(child);
        }
        // else WB[child].first += WB[src].first, WB[child].second += WB[src].second;
    }
}
void bfs(int src)
{
    queue<int> q;
    q.push(src); // damn sure it's a leaf node that is not visited
    vis[src] = true;
    WB[src] = {0, 0};
    if(s[src - 1] == 'W') WB[src].first++;
    else WB[src].second++;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int child : adjList2[node]) // node == parent of child
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                if(s[child - 1] == 'W') WB[child].first++;
                else WB[child].second++;

                WB[child].first += WB[node].first;
                WB[child].second += WB[node].second;
            }
            else if(!addedContribution[child])
            {
                addedContribution[child] = true;
                WB[child].first += WB[node].first;
                WB[child].second += WB[node].second;
            }
        }
    }
}
void solve()
{
    int n; cin >> n; 
    vector<int> a(n + 1);
    for (int i = 2; i <= n ; i++)
    {
        cin >> a[i];
    }
    
    cin >> s;

    for (int i = 2; i <= n; i++) adjList[a[i]].push_back(i);

    vector<int> leafNodes;
    for (int i = 2; i <= n; i++) if(adjList[i].size() == 0) leafNodes.push_back(i);

    // cerr << leafNodes.size() << nl;
    // for(auto e : leafNodes) cerr << e << " "; cerr << nl;

    for (int i = 1; i <= n; i++)
    {
        for(auto child : adjList[i])
        {
            adjList2[child].push_back(i);
        }
    }

    memset(vis, false, sizeof(vis)); 
    memset(addedContribution, false, sizeof(addedContribution)); 
    for(auto e : leafNodes)
    {
        if(!vis[e]) 
        {
            prevW = 0, prevB = 0;
            WB[e] = {0, 0};
            dfs(e);
        }
    }

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if(WB[i].first == WB[i].second && WB[i].first > 0) res++;
        cerr << "#" << i << " : " << WB[i].first << " " << WB[i].second << nl;
    }
    
    cout << res << nl;

    for(auto &e : adjList)
    {
        e.clear();
    }
    for(auto &e : adjList2)
    {
        e.clear();
    }
    memset(WB, 0, sizeof(WB));
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