#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, x; cin >> n >> x; x *= 2;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;

    int res = 0;
    ll lo = a[0], hi = a[0];
    for (int i = 0; i < n; )
    {
        while (i < n && hi - lo <= x)
        {
            hi = max(hi, a[i]);
            lo = min(lo, a[i]);
            // cout << i << " --> " << hi << " " << lo << nl;
            i++;
        }
        
        if(i == n) 
        {
            if((hi - lo) > x) res++;
            break;
        }

        i--;
        res++;
        lo = a[i], hi = a[i];
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