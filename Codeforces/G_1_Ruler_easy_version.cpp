#include <bits/stdc++.h>
#define nl endl
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int ask(int x, int y)
{
    cout << "? " << x << " " << y << nl;

    int res; cin >> res;

    return res;
}
void solve()
{
    int lo = 2, hi = 999, ans = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo)/2;
        if(ask(1, mid) != mid)
        {
            ans = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    

    cout << "! " << ans << nl;
}
int32_t main()
{
    // ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}