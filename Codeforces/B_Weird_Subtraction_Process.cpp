#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int x, y; cin >> x >> y;

    while (x > 0 && y > 0)
    {
        if(x >= 2ll * y) 
        {
            int lo = 1, hi = 1E18, res = -1;
            while (lo <= hi)
            {
                int mid = lo + (hi - lo)/2;

                if((__int128)x >= (__int128)2ll * y * mid)
                {
                    res = mid;
                    lo = mid + 1;
                }
                else hi = mid - 1;
            }
            
            // cerr << x << ' ' << y << ' ' << res << nl;
            x -= 2ll * y * res;
        }
        else if(y >= 2ll * x) 
        {
            int lo = 1, hi = 1E18, res = -1;
            while (lo <= hi)
            {
                int mid = lo + (hi - lo)/2;

                if((__int128)y >= (__int128)2ll * x * mid)
                {
                    res = mid;
                    lo = mid + 1;
                }
                else hi = mid - 1;
            }
            
            // cerr << x << ' ' << y << ' ' << res << nl;
            y -= 2ll * x * res;
        }
        else break;
    }

    cout << x << ' ' << y << nl;

    return 0;
}