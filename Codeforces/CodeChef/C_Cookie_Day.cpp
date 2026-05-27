#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; ll k; cin >> n >> k;
    vector<ll> v(n); for(auto &data : v) cin >> data;

    ll ans = 1e9;
    for (int i = 0; i < n; i++)
    {
        if(v[i] >= k) ans = min(ans, v[i]%k);
    }
    cout << ((ans == 1e9)? -1 : ans) << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}