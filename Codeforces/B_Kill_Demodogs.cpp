// Resolved from the TLE Eliminators (our job is to generate the formulla)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int MOD = 1E9 + 7;
void solve()
{
    ll n; cin >> n;

    // ll res = ((n * (n - 1) * ((4 * n) - 1)) * 337) % MOD;

    ll res = (n * (n + 1)) % MOD;
    res = (res * (((4 * n) - 1)) % MOD);
    res = (res * 337) % MOD;

    cout << res << nl;
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