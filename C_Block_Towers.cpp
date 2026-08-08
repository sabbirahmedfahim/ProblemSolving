#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;

    auto canWePlace = [&](int mid)
    {
        int cnt = 0, a = n, b = m, sixHere = mid / 6;
        a -= (mid / 2) - sixHere;
        b -= (mid / 3) - sixHere;
        a = max(0, a); b = max(0, b);

        return (a + b) <= sixHere;
    };

    int lo = 1, hi = 1E9 + 5, res = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo)/2;
        if(canWePlace(mid))
        {
            res = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    
    cout << res << nl;

    return 0;
}