// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll a, b; cin >> a >> b;
    if(a == b)
    {
        cout << 0 << ' ' << 0 << nl; return;
    }

    ll mxExcitement = abs(a-b);
    // __gcd(a, b) == __gcd(a-b, b) if a > b
    ll mx = max(a, b);
    cout << mxExcitement << ' ' << min(mx%mxExcitement, mxExcitement- (mx%mxExcitement)) << nl;
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