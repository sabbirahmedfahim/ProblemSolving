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
    // sort(all(a));

    vector<ll> pref(n);
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i];
    }
    vector<int> mxVal(n);
    mxVal[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        mxVal[i] = max(mxVal[i - 1], a[i]);
    }
    // print(mxVal);
    
    while (k--)
    {
        int query; cin >> query;

        int lo = 0, hi = n - 1, idx = -1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo)/2;
            if(mxVal[mid] <= query)
            {
                idx = mid;
                lo = mid + 1;
            }
            else 
            {
                hi = mid - 1;
            }
        }
        
        if(idx != -1) cout << pref[idx] << " ";
        else cout << 0 << " ";
    }
    cout << nl;
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