#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    ll needZero = 0, extraOneMustGo = 0, zeroAt_0_cost = 0, oneAt_0_cost = 0;
    // what i thought initially is Yunus Must Go :D
    ll tot_cost = 0;

    vector<tuple<ll, ll, ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b, c, d; cin >> a >> b >> c >> d;
        
        // jodi b > d hoy tahole (b - d) ke jetei hobe
        if(b > d)
        {
            extraOneMustGo += b - d; // free to 1 shift korte parbo
            tot_cost += a + (b - d); // top e ashlo
            if(a > c) zeroAt_0_cost += a - c; // free te 0 shift korte parbo
            b = d = 0; // ***
        }
        v.push_back({a, b, c, d});

        if(a < c) needZero += c - a;
    }

    for(auto &[a, b, c, d] : v)
    {
        // cout << a << b << c << d << nl;
        if(a < c)
        {
            ll free = min(zeroAt_0_cost, c - a);
            c -= free, needZero -= free, zeroAt_0_cost -= min(zeroAt_0_cost, free);
        }
        if(b < d) 
        {
            ll free = min(extraOneMustGo, d - b);
            d -= free;
        }
    }

    for(auto &[a, b, c, d] : v)
    {
        // cout << a << b << c << d << nl;
        if(a < c)
        {
            tot_cost += c - a;
        }
        if(b < d) tot_cost += d - b;
    }

    cout << tot_cost << nl;
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