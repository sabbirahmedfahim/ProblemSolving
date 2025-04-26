#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n); for(auto &e : a) cin >> e;
    
    map<int, int> mp;
    for(auto e : a)
    {
        mp[e]++;
        if(mp[e] == 4)
        {
            cout << "Yes" << nl; return;
        }
    }
    mp.clear();

    for(auto e : a)
    {
        mp[e]++;
        mp[e + 1]++;
        mp[e + 2]++;
    }
    for(auto [key, val] : mp)
    {
        // cout << key << " --> " << val << nl;
        int x = key, y = key-1, z = key + 1;
        if(mp[x] >= 5 && mp[y] >= 3 && mp[z] >= 3)
        {
            cout << "Yes" << nl; return;
        } 
    }

    cout << "No" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "###__" << tt << nl;
        solve();
    }

    return 0;
}