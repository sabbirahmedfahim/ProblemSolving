// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n);
    for(auto &e : a) cin >> e;
    vector<int> B(30, 0);

    for(auto e : a)
    {
        for (int bit = 0; bit <= 29; bit++)
        {
            if((e>>bit) & 1) B[bit]++;
        }
    }

    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        ll cur = 0;
        for (int bit = 0; bit <= 29; bit++)
        {
            if((a[i] >> bit) & 1) 
            {
                cur += 1ll * (n - B[bit]) * (1ll<<bit);
            }
            else 
            {
                cur += 1ll * B[bit] * (1ll<<bit);
            }
        }
        res = max(res, cur);
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