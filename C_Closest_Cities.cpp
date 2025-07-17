#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    vector<ll> pref(n);
    for (int i = 0; i < n; i++)
    {
        if(i == 0) 
        {
            pref[i] = a[i]; continue;
        }
        if(i == n-1) 
        {
            pref[i] = abs(a[i] - a[i - 1]); continue;
        }

        pref[i] = min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
    }
    
    int queries; cin >> queries;
    while (queries--)
    {
        ll l, r; cin >> l >> r; l--, r--;
        if(l > r) swap(l, r);
        ll res = a[r] - a[l];

        res = min(res, r - l);
        cout << res << nl;
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