#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    sort(v.begin(), v.end());

    // for(auto [key, val] : mp) cout << key << " " << val << nl;
    // cout << nl;

    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(!mp.count(v[i])) continue;

        if(i != 0 && v[i-1] != v[i]-1) cnt = 0;
        if(mp[v[i]] > cnt) ans += mp[v[i]] - cnt;
        cnt = mp[v[i]];

        mp.erase(v[i]);
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

