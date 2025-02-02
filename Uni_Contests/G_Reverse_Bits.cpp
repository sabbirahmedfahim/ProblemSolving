#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n; cin >> n; 
    ll ans = 0;
    for (int i = 0, j = 31; i <= 31; i++, j--) // consider 32-bit unsigned data
    {
        if((n>>i) & 1ll * 1) 
        {
            // ans += (1 << j); // overflow 
            ans += (1ll * 1 << j);
        }
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}