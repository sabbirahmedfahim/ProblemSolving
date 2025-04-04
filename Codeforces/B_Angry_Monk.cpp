#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll n, k; cin >> n >> k;
    vector<ll> a(k); for(auto &e : a) cin >> e;

    sort(all(a)); reverse(all(a));
    
    ll cnt = 0, arektaCnt = 0;
    for (int i = 1; i < k; i++)
    {
        if(a[i] == 1) continue;
        else cnt += (a[i] - 1); 
    }

    cout << cnt + (n-a[0]) << nl;
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