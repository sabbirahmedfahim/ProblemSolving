#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int ll
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, h; cin >> n >> h;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    auto canWePlace = [&](int mid) 
    { 
        vector<int> A;
        for (int i = 0; i < mid; i++) A.push_back(a[i]);
        sort(all(A)); reverse(all(A));

        int curr = h;

        for (int i = 0; i < mid; i += 2)
        {
            if(i + 1 < mid) curr -= A[i];
            else curr -= A[i];
        }

        // cout << curr << nl;
        return curr >= 0;
    };

    // canWePlace(3);
    
    int hi = n, lo = 1, res = -1;
    while(lo <= hi)
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
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    solve();

    return 0;
}