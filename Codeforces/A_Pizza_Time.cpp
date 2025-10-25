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

    int cnt = 0;
    while (n > 2)
    {
        cnt++;
        n -= 2;
    }

    cout << cnt << nl;

    // ll lo = 1, hi = 1E9, res = -1;
    // while (lo <= hi)
    // {
    //     ll mid = lo + (hi - lo)/2;
    //     if((n - (mid * 2)) > 2)
    //     {
    //         res = mid;
    //         lo = mid + 1;
    //     }
    //     else hi = mid - 1;
    // }
    // cout << res << nl;
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