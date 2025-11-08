#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int LCM(int a, int b)
{
    return (a / __gcd(a, b)) * b; // safer against overflow
}
void solve()
{
    ll n, x, y; cin >> n >> x >> y;

    ll tot = n / x;
    ll l = n - tot + 1, r = n;
    l += n / LCM(x, y);
    ll sum1 = ((r - l + 1) * (l + r)) / 2ll;
    cerr << l << " : " << r << nl;
    if(l > r) 
    {
        tot = n / y; tot -= n / LCM(x, y);
        // cerr << tot << " : " << y << nl;
        l = 1, r = tot;
        cout << - ((r - l + 1) * (l + r)) / 2ll << nl; 
        return;
    }
    
    tot = n / (y - LCM(x, y));
    l = 1, r = l + tot - 1;
    // cerr << l << " : " << r << " --> " << tot << nl;
    ll sum2 = ((r - l + 1) * (l + r)) / 2ll;

    cout << sum1 - sum2 << nl;
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