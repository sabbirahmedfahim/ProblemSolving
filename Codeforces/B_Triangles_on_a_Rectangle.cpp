// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int w, h; cin >> w >> h;

    int res = 0;
    for (int i = 0; i < 4; i++)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(auto &e : a) cin >> e;
        sort(all(a));
        int len = a.back() - a[0];

        if(i < 2) res = max(res, len * h);
        else res = max(res, len * w);
    }
    
    cout << res << nl;
}
int_fast32_t main()
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