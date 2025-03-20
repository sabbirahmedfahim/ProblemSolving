// resolved from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++) // 1 <= a[i] <= n is a hints?
    {
        cin >> a[i];
    }
    

    map<ll, ll> mp;
    ll res = 0;
    for (int i = 1; i <= n; i++)
    {
        int data = i - a[i];
        res += mp[data];
        mp[data]++; 
    }
    cout << res << nl;

    // for(auto [key, val] : mp)
    // {
    //     cout << key << ' ' << val << nl;
    // }
    // cout << nl;

    
    // for (int i = 1; i < n+1; i++)
    // {
    //     for (int j = i+1; j < n+1; j++)
    //     {
    //         // if(j - i == a[j] - a[i])    
    //         if(j - a[j] == i - a[i])    
    //         {
    //             cout << j << " - " << i << " ->> " << a[j] << " - " << a[i] << nl;    
    //         }
    //     }
    // }
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}