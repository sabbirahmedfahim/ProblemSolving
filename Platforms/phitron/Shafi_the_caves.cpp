#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    for(auto &data : v) 
    {
        cin >> data;
        // mp[data]++;
    }
    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j) continue;
            if(v[i] >= v[j] && v[i]%v[j] == 0) 
            {
                mp[v[j]]++; mx = max(mp[v[j]], mx);
            }
        }
    }
    cout << mx + 1 << nl;
}
int main()
{
    FAJR_BOOST()

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}