#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n; vector<int> a(n); for(auto &e : a) cin >> e;

    map<ll, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            // cout << a[i] + a[j] << nl;
            ll x = a[i] + a[j];
            mp[x]++;
        }
        // cout << nl;
    }
    
    ll res, mx_cnt = 0;
    for(auto [key, val] : mp)
    {
        if(val > mx_cnt)
        {
            res = key;
            mx_cnt = val;
        }
    }
    // cout << res << nl;
    cout << mp[res] << nl;

    return 0;
}