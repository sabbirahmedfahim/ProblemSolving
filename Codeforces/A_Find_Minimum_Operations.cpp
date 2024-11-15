// resolved from editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    ll n, k; cin >> n >> k;
    if(k == 1) 
    {
        cout << n << nl; return;
    }
    ll ans = 0;
    // cout << n << " " << k << nl;
    while (n)
    {
        ans += n%k;
        // cout << n%k << " ";
        n /= k;
        // cout << ans << " " << n << nl;
    }
    cout << ans << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}