#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m; vector<int> a(m);
    for(auto &e : a) cin >> e;
    sort(all(a));

    map<int, int> mp;
    for(auto e : a) mp[e]++;
    for (int i = 1; i <= n; i++)
    {
        if(!mp.count(i)) mp[i] = 0;
    }
    // for(auto [key, val] : mp) cout << key << " " << val << nl; cout << nl;

    auto canWePlace = [&](ll mid)
    {
        ll space = 0, need = 0;
        for(auto [key, val] : mp)
        {
            if(val > mid)
            {
                need += val - mid;
            }
            else if(val < mid) 
            {
                int have = mid - val;
                have /= 2;
                space += have;
            }
        }
        return space >= need;
    };

    ll hi = m, lo = 1, res = -1;
    while (lo <= hi)
    {
        ll mid = lo + (hi-lo)/2;
        if(canWePlace(mid))
        {
            res = mid; 
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    
    cout << res << nl;
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