#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, s; cin >> n >> s;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    
    int one = 0;
    for(auto e : a) 
    {
        if(e & 1) one++;
    }
    if(one < s)
    {
        cout << -1 << nl; return;
    }

    int mnOp = 1E9;
    int curr = 0;
    for (int l = 0, r = 0; r < n; r++)
    {
        while (r < n && curr < s)
        {
            curr += a[r];
            r++;
        }
        while (r < n && a[r] == 0) r++;
        r--;
        // cout << l << " -- " << r << nl;
        if(curr == s)
        {
            mnOp = min(mnOp, n - (r - l + 1) + (r == n));
        }
        while (curr == s)
        {
            curr -= a[l];
            l++;
        }
    }
    cout << mnOp << nl;
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