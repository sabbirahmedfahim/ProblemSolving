// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n; cin >> n;

    // naive
    // ll mx = 0;
    // for (ll x = 1; x <= n; x++)
    // {
    //     for (ll y = x+1; y <= n; y++)
    //     {
    //         cout << x << " " << y << " -> " << __gcd(x,y) << nl;
    //         mx = max(mx, __gcd(x, y));
    //     }
    // }
    // cout << mx << nl;

    cout << __gcd(n/2, 2*(n/2)) << nl; /* basically (n/2), easier than you think*/
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}