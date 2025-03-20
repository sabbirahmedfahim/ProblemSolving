// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, c, q; cin >> n >> c >> q;
    string s; cin >> s;

    vector<pair<ll, ll>> op(c), seg(c);
    ll cur_len = n;
    for (ll i = 0; i < c; i++)
    {
        ll l, r; cin >> l >> r;
        op[i] = {l, r}; // stored operations directly
        seg[i] = {cur_len + 1, cur_len + (r-l+1)}; // easy, just store the segments
        cur_len = cur_len + (r-l+1);
    }
    
    while (q--)
    {
        ll k; cin >> k;
        if(k <= n)
        {
            cout << s[k-1] << nl; continue;
        }
        
        for (ll i = c-1; i >= 0; i--)
        {
            if(seg[i].first <= k && seg[i].second >= k)
            {
                k = op[i].first + (k - seg[i].first); // the only line you have to think about
            }
        }
        cout << s[k-1] << nl;
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