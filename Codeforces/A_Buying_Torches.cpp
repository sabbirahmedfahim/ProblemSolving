#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll x, y, k; cin >> x >> y >> k;
    ll need_stricks = y * k;
    need_stricks += k - 1;

    ll op = k;
    op += (need_stricks/(x-1));
    if(need_stricks%(x-1)) op++;

    cout << op << nl;
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