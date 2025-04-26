#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int k, n, m; cin >> k >> n >> m;
    vector<int> a(n), b(m);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;

    if(a[0] != 0 && b[0] != 0)
    {
        cout << -1 << nl; return;
    }

    if(a[0] == 0)
    {
        for(auto e : a) cout << e << " ";
        for(auto e : b) cout << e << " ";
        cout << nl;
    }
    else 
    {
        for(auto e : b) cout << e << " ";
        for(auto e : a) cout << e << " ";
        cout << nl;
    }
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