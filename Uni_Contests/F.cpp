#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, T; cin >> n >> T;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    auto canWePlace = [&](int mid)
    {
        int curr = 0;
        for (int i = 0; i < n; i++)
        {
            curr += a[i] / mid;
            if(a[i] % mid != 0) curr++;
        }
        
        return curr <= T;
    };

    int hi = 1E18, lo = 1, res = -1;
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

    solve();

    return 0;
}