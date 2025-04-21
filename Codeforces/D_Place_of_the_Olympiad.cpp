#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int row, col, k; cin >> row >> col >> k;

    auto canWePlace = [&](int mid)
    {
        ll cnt = col/(mid + 1);
        cnt *= mid;
        cnt += col % (mid + 1);
        return cnt * row >= k;
    };

    int l = 1, r = col, res = -1;
    while (l <= r)
    {
        int mid = l + (r-l)/2;
        if(canWePlace(mid))
        {
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
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