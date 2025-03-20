#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x; cin >> n >> x;
    vector<ll> a(n); for(auto &e : a) cin >> e;

    ll mx = 0;
    for(auto e : a)
    {
        if(e%x) mx += (e/x) + 1;
        else mx += e/x;
    }

    ll mn = 0;
    ll sum = accumulate(all(a), 0ll);
    if(sum%x) mn += (sum/x)+1;
    else mn += sum/x;

    cout << mn << " " << mx << nl;
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