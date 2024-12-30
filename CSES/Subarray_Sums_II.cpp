#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    ll n, x; cin >> n >> x; vector<ll> v(n); for(auto &data : v) cin >> data;
    // for (int i = 0; i < n; i++) // naive 
    // {
    //     ll sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum += v[j];
    //         if(sum == x) cnt++;
    //         // if(sum > x) break;
    //     }
    // }
 
    vector<ll> prefSum(n);
    prefSum[0] = v[0];
    for (int i = 1; i < n; i++) prefSum[i] = prefSum[i-1] + v[i];
 
    // print(prefSum);
    
    map<ll, ll> mp; mp[0] = 1;
    ll sum = 0, cnt = 0;
    // for(auto data : prefSum) mp[data]++; 
    for (int i = 0; i < n; i++)
    {
        sum = prefSum[i];
        if(mp.count(sum-x)) cnt += mp[sum-x];
        mp[prefSum[i]]++;
        // if(!mp.count(sum-x)) mp[sum] = i;
    }
    
    cout << cnt << nl;
 
    return 0;
}
