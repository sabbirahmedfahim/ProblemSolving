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
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    if(is_sorted(all(a)))
    {
        cout << -1 << nl;
        return;
    }

    auto arektaVec = a;
    sort(all(arektaVec));

    int res = 2E9;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != arektaVec[i])
        {
            res = min(res, max(abs(a[i] - arektaVec.front()), abs(arektaVec.back() - a[i])));
        }
    }
    
    cout << res << nl;
}
int_fast32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}