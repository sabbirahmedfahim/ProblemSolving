#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    iOS

    int n; cin >> n; 
    vector<int> v(n); for(auto &data : v) cin >> data;
    int k; cin >> k;

    vector<ll> prefSum(n);
    prefSum[0] = v[0];
    for (int i = 1; i < n; i++) prefSum[i] = prefSum[i-1] + v[i];
    // print(prefSum);
    
    map<ll, ll> mp;
    mp[0] = -1;
    ll sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum = prefSum[i];
        if(mp.count(sum-k)) ans = max(ans, i-mp[sum-k]);
        if(!mp.count(sum)) mp[sum] = i;
        // cout << ans << nl;
        // for(auto [key, val] : mp) cout << key << " -> " << val << nl;
    }

    cout << ans << nl;

    return 0;
}