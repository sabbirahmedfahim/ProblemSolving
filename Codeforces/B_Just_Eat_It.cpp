// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
How to find the maximum sum subarray even when negative values are present
Kadane's Algorithm ->  max sum subarray
*/
void solve()
{
    int n; cin >> n; vector<int> a(n); for(auto &e : a) cin >> e;

    ll sum = accumulate(all(a), 0ll);

    ll mxSum = 0, cur = 0;
    for (int i = 0; i < n-1; i++)
    {
        cur += a[i];
        mxSum = max(mxSum, cur);
        if(cur < 0) cur = 0;
    }
    
    cur = 0; // ***
    for (int i = 1; i < n; i++)
    {
        cur += a[i];
        mxSum = max(mxSum, cur);
        if(cur < 0) cur = 0;
    }

    if(sum > mxSum) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t = 1;
    cin >> t;

    for(int tt = 1; tt <= t; tt++)
    {
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}