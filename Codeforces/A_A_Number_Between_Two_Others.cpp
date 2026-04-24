#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b; // safer against overflow
}
void solve()
{
    ll x, y; cin >> x >> y;

    ll koybar = y / x;
    
    ll z = x * (koybar - 1);

    if(x < z && z < y && z % x == 0 && y % z != 0) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}