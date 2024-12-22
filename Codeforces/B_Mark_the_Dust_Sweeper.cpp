#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, ans = 0; cin >> n;
    vector<ll> v(n); 
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i == n-1) continue;
        if(ans && v[i] == 0) ans++;
        else ans += v[i];
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