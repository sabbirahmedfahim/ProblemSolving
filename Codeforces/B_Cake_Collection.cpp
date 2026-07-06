#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    sort(all(a)); reverse(all(a));
    int res = 0;
    for (int i = 0; i < n && m > 0; i++, m--)
    {
        res += a[i] * m;
    }
    
    cout << res << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}