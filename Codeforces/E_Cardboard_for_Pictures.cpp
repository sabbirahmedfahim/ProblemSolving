#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, c; cin >> n >> c;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;

    ll lo = 1, hi = 1E9, ans = -1;

    auto canWePlace = [&](ll mid)
    {
        ll currAmount = 0;
        for(auto e : a)
        {
            ll data = e + (mid * 2);
            currAmount += (data * data);

            if(currAmount > c) 
            {
                // cerr << mid << " : " << currAmount << nl;
                return false;
            }
        }
        return true;
    };

    while (lo <= hi)
    {
        ll mid = lo + (hi - lo)/2;
        if(canWePlace(mid))
        {
            ans = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
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