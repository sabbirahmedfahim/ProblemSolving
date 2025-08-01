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
    
    int zero = 0, one = 0;
    for(auto e : a) 
    {
        if(e == 0) zero++;
        else if(e == 1) one++;
    }

    int sum = accumulate(all(a), 0ll);
    sum += min(zero, one) * 2;
    sum -= min(zero, one);
    sum += zero - min(zero, one);
    
    cout << sum << nl;
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