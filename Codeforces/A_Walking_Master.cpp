#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll a, b, c, d; cin >> a >> b >> c >> d;

    if(b > d)
    {
        cout << -1 << nl; return;
    }

    ll op = (d-b);
    a += op;
    if(a >= c) op += a - c;
    else 
    {
        cout << -1 << nl; return;
    }

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