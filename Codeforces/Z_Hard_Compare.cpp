#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
const ll MOD = 1E9+7;
ll Pow(ll x, ll y)
{
    ll ans = 1;
    while (y)
    {
        if(y&1) ans = (ans * x) % MOD;

        y >>= 1;
        x = (x*x)%MOD;
    }
    return ans;
}
void solve() // WA
{
    ll a, b, c, d; cin >> a >> b >> c >> d;

    if(Pow(a, b) > Pow(c, d)) cout << "YES" << nl;
    else cout << "NO" << nl;
}
void solve2()
{
    /*
       a^b = c^d
    => log(a^b) = log(c^d)
    => b log a = c log d
    */
    ll a, b, c, d; cin >> a >> b >> c >> d;

    if(b * log(a) > d * log(c)) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    // solve();
    solve2();

    return 0;
}