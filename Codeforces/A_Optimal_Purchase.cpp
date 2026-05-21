#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll a, b, c; cin >> a >> b >> c;

    if((long double) b > (long double) c / (long double) 3)
    {
        ll three = a / 3;

        ll cost = (ll) c * three;

        a = a % 3;

        if(a == 2) 
        {
            if((2 * b) > c) cost += c;
            else cost += b + b;
        }
        else cost += a * min((long double) b, (long double) c);
        // cost += a * min((long double) b, (long double) c);

        cout << cost << nl;
    }
    else 
    {
        // cerr << "#" << nl;
        cout << a * b << nl;
    }
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