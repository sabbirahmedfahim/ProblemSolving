// used test case
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
ll op1(ll k, ll a, ll b, ll x, ll y) // to check the process
{
    ll cnt = 0;
    while (k >= a)
    {
        cnt++;
        k -= x;
    }
    while (k >= b)
    {
        cnt++;
        k -= y;
    }
    return cnt;
}
ll op2(ll k, ll a, ll b, ll x, ll y) // to check the process
{
    ll cnt = 0;
    while (k >= b)
    {
        cnt++;
        k -= y;
    }
    while (k >= a)
    {
        cnt++;
        k -= x;
    }
    return cnt;
}
void solve()
{
    ll k, a, b, x, y; cin >> k >> a >> b >> x >> y;

    if(k < a && k < b)
    {
        cout << 0 << nl; return;
    }

    ll res = 0;

    if(x <= y) 
    {
        ll toBurn = k - a;

        ll kotobar = toBurn/x;
        if(toBurn%x == 0) kotobar++;
        res += kotobar;
        k -= kotobar * x;
        
        toBurn = k - b;
        
        ll now = toBurn/y;
        if(toBurn%y == 0) now++;

        if(now > 0) res += now;
    }
    else 
    {
        ll toBurn = k - b;

        ll kotobar = toBurn/y;
        if(toBurn%x == 0) kotobar++;
        res += kotobar;
        k -= kotobar * y;
        
        if(k < a) 
        {
            cout << res << nl; return;
        }
        toBurn = k - a;

        ll now = toBurn/x;
        if(toBurn%x == 0) now++;

        if(now > 0) res += now;
    }

    cout << res << nl;

    // check the process
    // cout << max(op1(k, a, b, x, y), op2(k, a, b, x, y)) << nl;
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