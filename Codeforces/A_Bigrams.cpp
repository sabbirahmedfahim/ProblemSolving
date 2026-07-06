#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    sort(all(a)); reverse(all(a));

    if(a.front() >= 3)
    {
        cout << "YES" << nl; return;
    }

    if(n >= 2)
    {
        if(min(a[0], a[1]) >= 2)
        {
            cout << "YES" << nl; return;
        }
    }

    cout << "NO" << nl;
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