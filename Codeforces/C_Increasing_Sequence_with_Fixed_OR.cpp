#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n; cin >> n;
    if(__builtin_popcount(n) == 1)
    {
        cout << 1 << nl << n << nl; return;
    }

    vector<ll> ans;
    
    ans.push_back(n);
    for (ll bit = 0; bit <= 60; bit++)
    {
        if((n>>bit) & 1)
        {
            // cout << bit << nl;
            ans.push_back(n ^ (1ll<<bit));
        }
    }

    reverse(all(ans));

    cout << ans.size() << nl;
    print(ans);
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
