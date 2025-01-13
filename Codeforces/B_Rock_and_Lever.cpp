// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve() // TLE (naive)
{
    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    int cnt = 0;
    sort(all(v));
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if((v[i] & v[j]) >= (v[i] ^ v[j])) 
            {
                cnt++;
                // cout << v[i] << " " << v[j] << nl;
            }
        }
    }
    cout << cnt << nl;
}
void solve2() // optimized
{
    int n; cin >> n; vector<int> v(n); for(auto &data : v) cin >> data;
    
    map<int, int> mp;
    for(auto data : v) 
    {
        // if(__lg(data) != 0) mp[data] = __lg(data);
        mp[__lg(data)]++;
    }

    // print(v);
    ll ans = 0;
    for(auto [key, val] : mp) 
    {
        // cout << key << " " << val << nl;
        ans += (1ll * val*(val-1))/2; // n*(n-1)/2
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve2();

    return 0;
}
