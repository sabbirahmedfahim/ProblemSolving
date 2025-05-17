// Resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
/*
sum of p consequtive elements should be equal to q __> a[i] = a[i + p]
*/
void solve()
{
    int n, m, p, q; cin >> n >> m >> p >> q;

    if(n%p == 0)
    {
        if((n/p) * q == m) cout << "YES" << nl;
        else cout << "NO" << nl;
        return;
    }
    
    cout << "YES" << nl; // fractions gave the freedom to make true!
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