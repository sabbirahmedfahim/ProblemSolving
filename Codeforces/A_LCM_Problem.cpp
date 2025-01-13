// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
ll LCM(ll l, ll r)
{
    return (l/(__gcd(l, r))) * r;
}
void solve() // TLE
{
    ll l, r; cin >> l >> r;
    for (ll x = l; x <= r-1; x++)
    {
        for (ll y = x+1; y <= r; y++)
        {
            if(x < y && LCM(x, y) >= l && LCM(x, y) <= r && x >= l && y <= r)
            {
                cout << x << " " << y << nl; return;
            } 
        }
    }
    cout << -1 << " " << -1 << nl;
}
void solve2()
{
    ll l, r; cin >> l >> r;

    /* LCM of x, 2x is 2x, it 2x is out of bound, there are no answer. either it can be proved that ans exist*/

    ll y = l * 2;
    if(y > r) cout << -1 << " " << -1 << nl;
    else cout << l << " " << y << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve2();

    return 0;
}