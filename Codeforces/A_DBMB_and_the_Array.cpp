#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, s, x; cin>>n>>s>>x;
    vector<int>a(n);
    for(auto &e: a) cin >> e;

    ll sum = accumulate(all(a), 0ll);

    if(sum == s) cout << "YES" << nl;
    else if(sum > s) cout << "NO" << nl;
    else 
    {
        int need = s - sum;
        if(need % x == 0) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}
int_fast32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}