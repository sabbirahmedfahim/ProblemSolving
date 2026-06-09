// resolved 
#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    
    auto canWePlace = [&](int k)
    {
        if(k < a[0].first) return false;
        int currMn = a[0].first, currMx = min(a[0].second, k);

        for (int i = 1; i < n; i++)
        {
            int nxtMn = currMn - k, nxtMx = currMx + k;

            if(a[i].first > nxtMx || a[i].second < nxtMn)
            {
                return false;
            } 

            currMn = max(a[i].first, nxtMn), currMx = min(a[i].second, nxtMx);
        }

        return true;
    };

    int hi = 1E9 + 5, lo = 0, res = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
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