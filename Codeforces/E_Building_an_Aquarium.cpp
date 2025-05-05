#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, x; cin >> n >> x;
    vector<ll> a(n); for(auto &e : a) cin >> e;
    sort(all(a));

    auto canWePlace = [&] (ll mid)
    {
        ll water = 0;
        for(auto e : a)
        {
            if(e >= mid) break;

            water += (mid - e);
            if(water > x) return false;
        }
        return water <= x;
    };

    ll hi = 1E18, lo = 1, res = -1;
    while (lo <= hi)
    {
        ll mid = lo + (hi-lo)/2;
        if(canWePlace(mid))
        {
            res = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
    }
    
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