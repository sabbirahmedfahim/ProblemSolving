// Resolved from the TLE Eliminators (have confusions)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;

    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    
    vector<int> adj[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i].push_back(mat[j][i]);
            // cout << mat[j][i] << " ";
        }
        // cout << nl;
    }
    
    for(auto &e : adj)
    {
        sort(all(e));
    }
    
    ll ans = 0;
    for(auto e : adj)
    {
        // print(e);
        for (int i = 0; i < e.size(); i++)
        {
            ans += (1ll * (-1) * i * e[i]) + (1ll * (n - i - 1) * e[i]);
        }
    }

    cout << abs(ans) << nl;
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