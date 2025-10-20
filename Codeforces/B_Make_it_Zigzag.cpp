#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int curr_mx = a[0];
    if(n >= 1) curr_mx = max(a[0], a[1]);
    ll tot_op = 0;


    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            if(a[i] >= curr_mx)
            {
                // cerr << i << nl;
                tot_op += a[i] - curr_mx + 1;
            }
        }

        curr_mx = max(curr_mx, a[i]);
    }
    
    cout << tot_op << nl;
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