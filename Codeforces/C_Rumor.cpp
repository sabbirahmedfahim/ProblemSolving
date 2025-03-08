// took hints from the editorial, amazing problem
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
const int N = 1e5+5; 
vector<int> v[N];
bool vis[N];
vector<int> givenArr;
vector<int> arektaArr;
void dfs(int src) // when ur job is to randomly traverse the graph :p
{
    // cout << givenArr[src-1] << " ";
    vis[src] = true;
    arektaArr.push_back(givenArr[src-1]); // 0-based
    for (int child : v[src])
    {
        if(!vis[child]) dfs(child); 
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, e; cin >> n >> e;

    for (int i = 0; i < n; i++)
    {
        int data; cin >> data;
        givenArr.push_back(data);
    }
    
    while (e--)
    {
        int x, y; cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    memset(vis, false, sizeof(vis)); 
    ll tot = 0;
    for (int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            arektaArr.clear();
            dfs(i);
            sort(all(arektaArr));
            tot += arektaArr.front();
        }
    }
    
    cout << tot << nl;


    return 0;
}