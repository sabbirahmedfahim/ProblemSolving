// took hints from the TLE Eliminators
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, l, r; cin >> n >> l >> r;

    vector<ll> res;
    for (ll i = 1; i <= n; i++)
    {
        ll lo = 1, hi = 1E9, curr = -1;

        while (lo <= hi)
        {
            ll mid = lo + (hi - lo)/2;
            if(i * mid >= l && i * mid <= r)
            {
                curr = i * mid;
                hi = mid - 1;
            }
            else if(i * mid > r) hi = mid - 1;
            else lo = mid + 1;
        }
        
        if(curr == -1)
        {
            cout << "NO" << nl; return;
        }

        res.push_back(curr);
    }
    
    cout << "YES" << nl;
    print(res);
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