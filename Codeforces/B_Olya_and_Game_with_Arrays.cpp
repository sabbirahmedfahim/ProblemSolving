#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;

    vector<pair<int,int>> mx;

    while (n--)
    {
        int m; cin >> m;
        vector<int> a(m);
        for(auto &e : a) cin >> e;
        sort(all(a));

        mx.push_back({a[1], a[0]});
    }
    
    sort(all(mx));
    ll res = 0; int mn = 1E9;
    for (int i = 1; i < mx.size(); i++)
    {
        res += mx[i].first;
        mn = min(mn, mx[i].second);
    }
    mn = min(mx[0].second, mn);

    res += mn;

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