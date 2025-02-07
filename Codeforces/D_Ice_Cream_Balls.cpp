// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
combinatorics---  (n * (n-1)) / 2
*/
void solve()
{
    ll n; cin >> n;

    auto canWePlace = [&](ll mid)
    {
        ll x = (mid*(mid-1))/2;
        
        return x <= n;
    };

    ll l = 2, r = 2E9, mid, ans = -1;
    while (l <= r)
    {
        mid = l + (r-l)/2;
        if(canWePlace(mid))
        {
            ans = mid; l = mid + 1;
        }
        else r = mid - 1;
    }

    ll extra = n - ((ans * (ans-1))/2);
    ans += extra;
    
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