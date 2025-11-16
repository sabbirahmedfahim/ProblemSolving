#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, x, y; cin >> n >> x >> y;

    if(x == y)
    {
        cout << 0 << nl;
        return;
    }

    ll sameThings = n / (x * y);
    // n -= sameThings; // n is changed

    ll tot_by_x = (n / x) - sameThings, tot_by_y = (n / y) - sameThings;
    // cerr << "# " << tot_by_x << " : " << tot_by_y << nl;
    ll sum1 = (tot_by_y * (tot_by_y + 1)) / 2;

    ll l = n - tot_by_x + 1, r = n;
    ll sum2 = ((r + l) * (r - l + 1)) / 2;

    // cerr << sum2 << " : " << sum1 << nl;

    cout << sum2 - sum1 << nl;
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