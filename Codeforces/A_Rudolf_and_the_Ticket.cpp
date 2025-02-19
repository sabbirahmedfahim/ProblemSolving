#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;
    sort(all(b));

    int ans = 0;
    for(auto e : a)
    {
        int target = k - e;
        
        int l = 0, r = m-1, mid, idx = -1;
        while (l <= r)
        {
            mid = l + (r-l)/2;
            if(target >= b[mid])
            {
                idx = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        if(idx != -1) ans += (idx + 1);
    }
    cout << ans << nl;
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