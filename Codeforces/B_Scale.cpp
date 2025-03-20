#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    char grid[n][n];
    for (int i = 0; i < n; i++)
    {
        string x; cin >> x;
        for (int j = 0; j < x.size(); j++)
        {
            grid[i][j] = x[j];
        }
    }
    
    for (int i = 0; i < n; i+=k)
    {
        for (int j = 0; j < n; j+=k)
        {
            cout << grid[i][j];
        }
        cout << nl;
    }
    // cout << nl;
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