#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n,k; cin >> n >> k;
    map<ll, ll> mp;
    while (k--)
    {
        ll brand, cost; cin >> brand >> cost;
        mp[brand] += cost;
    }
    vector<ll> costArr;
    for(auto [key, val] : mp) costArr.push_back(val);
    sort(costArr.rbegin(), costArr.rend());
    ll mxEarn = 0;
    for (int i = 0; i < n && i < costArr.size(); i++) mxEarn += costArr[i];
    cout << mxEarn << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}