#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<int> a(n); for(auto &e : a) cin >> e;
    sort(all(a));

    auto canWePlace = [&](ll mid)
    {
        ll op = 0;
        for (int i = n/2; i < n; i++)
        {
            if(a[i] < mid) op += (mid - a[i]);
            if(op > k) return false;
        }
        return true;
    };

    ll lo = 0, hi = 1E18, res = -1;
    while (lo <= hi)
    {
        ll mid = lo + (hi-lo)/2;
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