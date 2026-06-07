#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int ll
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int a, b, c; cin >> a >> b >> c;
    int n, m;cin>> n  >>m;

    cout << min(min(a + b + c, n), min(a + b + c, m)) << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}