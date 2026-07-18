#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    auto canWePlace = [&](int mid)
    {
        int currExtra = k;

        for (int i = 0; i < n; i++)
        {
            int need = a[i] * mid;

            if(b[i] < need)
            {
                if(need - b[i] <= currExtra)
                {
                    currExtra -= need - b[i];
                }
                else return false;
            }
        }
        
        return true;
    };

    int lo = 0, hi = 1E10, res = 0;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if(canWePlace(mid))
        {
            res = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
    }
    
    cout << res << nl;

    return 0;
}