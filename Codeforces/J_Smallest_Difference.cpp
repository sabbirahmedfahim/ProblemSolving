#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<int> a(n); for(auto &e : a) cin >> e;
    sort(all(a));

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int target = a[i];
        int lo = i, hi = n-1, idx = -1;
        while (lo <= hi)
        {
            int mid = lo + (hi-lo)/2;
            if(a[mid] <= target+1)
            {
                idx = mid;
                lo = mid + 1;
            }
            else hi = mid - 1;
        }
        if(idx != -1)
        {
            res = max(res, idx - i + 1);
        }
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