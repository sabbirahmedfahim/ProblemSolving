// resolved (it's an easy process tbh)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int curr_mn = a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i] > (2 * curr_mn - 1)) 
        {
            cout << "NO" << nl; return;
        }
        else
        {
            curr_mn = min(curr_mn, a[i]);
        }
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