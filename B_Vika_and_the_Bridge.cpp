#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    // enough to repaint ONE plank of the bridge.
    auto canWePlace = [&](int mid) 
    {
        set<int> st; map<int, int> mp;
        for (int i = 0; i < n; i += mid)
        {
            st.insert(a[i]); mp[a[i]]++;
            if(st.size() > 2) return false;

            while (i + 1 < n && a[i] == a[i + 1])
            {
                i++;
            }
        }

        bool ok = false;
        for(auto e : st)
        {
            if(mp[e] == 1) ok = true;
        }

        return ok;
    };

    int lo = 0, hi = 2E5 + 6, res = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo)/2;
        if(canWePlace(mid + 1))
        {
            res = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
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