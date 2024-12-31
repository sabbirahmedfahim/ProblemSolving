#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
/*
Observation: 1 <= n <= 5000
*/
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    ll n, x; cin >> n >> x; vector<ll> v(n); 
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; mp[v[i]] = i;
    }
    
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            ll target = x - v[i] - v[j];
            if(mp.count(target) && mp[target] > j) 
            {
                cout << i+1 << " " << j+1 << " " << mp[target]+1 << nl; return 0;
            }
        }
        if(mp[v[i]] == i) mp.erase(v[i]);
    }
    cout << "IMPOSSIBLE" << nl;

    return 0;
}