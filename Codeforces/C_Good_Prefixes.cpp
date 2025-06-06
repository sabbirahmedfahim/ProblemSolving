#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> a(n); for(auto &e : a) cin >> e;

    ll cur_mx = 0, cur_sum = 0;
    int cnt = 0;
    for(auto e : a)
    {
        cur_sum += e;
        cur_mx = max(cur_mx, e);
        // cout << cur_sum << " " << cur_mx << nl;
        if(cur_sum - cur_mx == cur_mx) cnt++; 
    }

    cout << cnt << nl;
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