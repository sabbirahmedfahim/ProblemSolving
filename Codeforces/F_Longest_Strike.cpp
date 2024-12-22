// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<ll> v(n); for(auto &data : v) cin >> data;
    sort(all(v));

    map<ll, ll> mp;
    for(auto data : v) mp[data]++;
    // for(auto [key, val] : mp) cout << key << " " << val << nl;
    // cout << nl;

    ll ansL = -1, ansR = -1; // ans
    ll l = -1, r;
    for (int i = 0; i < n; i++)
    {
        if(mp[v[i]] < k) continue;
        if(l == -1) l = v[i];
        if(i == n-1 || v[i+1] - v[i] > 1 || mp[v[i+1]] < k) // i == n-1 will handle v[i+1]
        {
            r = v[i];
            if(r - l >= ansR - ansL)
            {
                ansR = r, ansL = l;
            }
            l = -1, r = -1;
        }
    }
    
    if(ansL == -1) cout << -1 << nl;
    else cout << ansL << " " << ansR << nl;
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}