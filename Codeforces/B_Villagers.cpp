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
    sort(all(a));

    ll res = 0;
    if(n & 1)
    {
        for (int i = 1; i < n; i += 2)
        {
            res += max(a[i], a[i + 1]);
        }
        res += a[0];
    }
    else
    {
        for (int i = 0; i < n; i += 2)
        {
            res += max(a[i], a[i + 1]);
        }
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