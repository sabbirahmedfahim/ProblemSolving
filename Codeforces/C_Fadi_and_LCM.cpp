// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
ll LCM(ll a, ll b)
{
    return (a/__gcd(a, b))*b;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n; cin >> n;
    ll ans;
    for (ll i = 1; i*i <= n; i++)
    {
        if(n%i == 0 && LCM(i, n/i) == n) ans = i;
    }
    cout << ans << " " << n/ans << nl;

    return 0;
}