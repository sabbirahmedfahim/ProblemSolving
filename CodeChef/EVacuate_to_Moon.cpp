#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    ll n, m, h; cin >> n >> m >> h;
    vector<ll> energyCapacities(n), powerOfPowerOutlets(m);
    for(auto &data : energyCapacities) cin >> data;
    for(auto &data : powerOfPowerOutlets) cin >> data;

    sort(energyCapacities.rbegin(), energyCapacities.rend());
    sort(powerOfPowerOutlets.rbegin(), powerOfPowerOutlets.rend());

    ll ans = 0;
    for (int i = 0; i < min(n, m); i++)
    {
        ans += min(energyCapacities[i], powerOfPowerOutlets[i]*h);
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