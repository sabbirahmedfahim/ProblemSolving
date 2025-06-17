#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, pos; cin >> n >> pos;

    vector<ll> a(n);
    for(auto &e : a) cin>>e;

    sort(all(a));

    if(a[0] >= pos) cout << a[n-1] - pos << nl;
    else if(a[n-1] <= pos) cout << pos - a[0] << nl;
    else 
    {
        // cout << (min(pos - a[0]) * 2) + max(a[n-1] - pos) << nl;
        // cout << "OK" << nl;
        ll x = pos - a[0], y = a[n-1] - pos;
        ll xx = min(x, y);
        ll yy = max(x, y);
        cout << (2ll * xx) + yy << nl;
    }
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