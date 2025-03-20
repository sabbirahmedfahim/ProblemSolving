#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x; cin >> n >> x;
    vector<int> a(n); for(auto &e : a) cin >> e;

    ll sum = accumulate(all(a), 0ll);
    // cout << sum << nl;
    if(sum%n == 0 && sum/n == x) cout << "YES" << nl;
        else cout << "NO" << nl;
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