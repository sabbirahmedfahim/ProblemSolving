#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int ll
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    vector<int> a(m);
    for(auto &e : a) cin >> e;
    // print(a);

    map<int, int> mp;
    for(auto e : a) mp[e]++;

    auto canWePlace = [&](int mid)
    { 
        int totTask = m;
        for(auto [x, y] : mp)
        {
            int kajKorbe = min(mid, y);
            int freeHoye = 0;
            if(mid > kajKorbe) freeHoye += (mid - y) / 2;

            totTask -= min(totTask, kajKorbe + freeHoye);
        }
        // cerr << totTask << nl;

        for (int i = 1; i <= n; i++)
        {
            if(!mp.count(i)) totTask -= min(totTask, mid / 2);
        }

        return totTask == 0;
    };

    // canWePlace(2);
    // return;

    int lo = 1, hi = 1E9, res = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        // cerr << mid << nl;
        if(canWePlace(mid))
        {
            res = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    
    cout << res << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}