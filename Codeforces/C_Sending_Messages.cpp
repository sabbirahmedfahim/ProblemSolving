#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, f, a, b; cin >> n >> f >> a >> b;
    vector<ll> v(n); for(auto &e : v) cin >> e;
    sort(all(v));

    ll cur = f;
    cur -= min(v[0] * a, b);
    for (int i = 1; i < n; i++)
    {
        cur -= min(1ll * (v[i] - v[i-1]) * a, b);
    }
    
    if(cur > 0) cout << "YES" << nl;
    else cout << "NO" << nl;
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