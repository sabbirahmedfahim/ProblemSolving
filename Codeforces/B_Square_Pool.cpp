#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll balls, poolSideLen; cin >> balls >> poolSideLen;

    ll res = 0;
    while (balls--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if(c == d && (c + d) == poolSideLen) res++;
        else if(a > b && c < d && (c + d) == poolSideLen) res++;
        else if(a < b && c > d && (c + d) == poolSideLen) res++;
    }
    cout << res << nl;
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