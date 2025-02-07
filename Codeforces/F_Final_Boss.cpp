#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll h, n; cin >> h >> n; 
    vector<ll> v(n); for(auto &e : v) cin >> e;
    vector<ll> colddownAttack(n); for(auto &e : colddownAttack) cin >> e;

    auto canWePlace = [&] (ll tot_turn)
    {
        // ll sum = accumulate(all(v), 1ll); // Nice :)
        ll sum = accumulate(all(v), 0ll); // first turn??
        tot_turn--; // let, ok

        for (int i = 0; i < n; i++)
        {
            if(sum >= h) return true;
            sum += ((tot_turn/colddownAttack[i]) * v[i]);
        }
        return (sum >= h);
    };
    ll l = 1, r = 1E12, mid, ans = -1;
    while (l <= r)
    {
        mid = l + (r-l)/2;
        if(canWePlace(mid))
        {
            ans = mid; r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans << nl;
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