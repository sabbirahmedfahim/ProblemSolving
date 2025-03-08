#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, k, p; cin >> n >> k >> p;

    ll kk = abs(k);
    if(n * p < kk)
    {
        cout << -1 << nl; return;
    }

    ll minOp = 0;
    ll sum = 0;

    if(k <= -1)
    {
        while (1)
        {
            if(sum <= k) break;
            minOp++; sum -= p;
        }
        cout << minOp << nl; return;
    }

    while (1)
    {
        if(sum >= k) break;
        minOp++; sum += p;
    }
    
    cout << minOp << nl;

    // cout << "have answer" << nl;
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