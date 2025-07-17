#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    k--;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    int curr = a[k];
    sort(all(a));

    int mx = a[n-1];
    if(mx == curr)
    {
        cout << "YES" << nl; return;
    }

    int updatedK = -1;

    for (int i = 0; i < n; i++) if(a[i] == curr) updatedK = i;

    vector<int> b; b.push_back(curr);
    for (int i = updatedK + 1; i < n; i++)
    {
        if(b.back() != a[i]) b.push_back(a[i]);
    }
    
    int waterLevel = 0;
    for (int i = 0; i < b.size() - 1; )
    {
        int l = i + 1, r = b.size() - 1, idx = -1;
        while (l <= r)
        {
            int mid = l + (r-l)/2;
            if((b[mid] - b[i]) + waterLevel <= b[i])
            {
                idx = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        if(idx == -1)
        {
            cout << "NO" << nl; return;
        }
        
        waterLevel += (b[idx] - b[i]);
        i = idx;
    }

    cout << "YES" << nl;
}
int_fast32_t main()
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