// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> v(n);
    for(auto &data : v) cin >> data;
    
    ll ans = 0;
    if (n % 2 == 0) 
    {
        for (int i = 0; i < n; i += 2) ans = max(ans, v[i + 1] - v[i]);
    }
    else 
    {
        ans = 1e18;
        for (int i = 0; i < n; i += 2) 
        {
            ll res = 0;
            for (int j = 0; j < n; j += 2) 
            {
                if (j == i) j--;
                else res = max(res, v[j + 1] - v[j]);
            }
            ans = min(ans, res);
        }
    }
    ans = max(ans, 1LL);
    cout << ans << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}