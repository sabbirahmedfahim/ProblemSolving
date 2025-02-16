// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    vector<ll> a(n), b(m); 
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;
    sort(all(b));

    ll prev = -1E9;
    for (int i = 0; i < n; i++)
    {
        // if(prev <= a[i]) continue; // no, we'll try to minimize the value
        
        auto it = lower_bound(all(b), 1ll * a[i]+prev);
        if(it != b.end())
        {
            if(a[i] < prev) a[i] = *it - a[i];
            else a[i] = min(a[i], *it-a[i]); // b[i] - a[i]
        }
        if(a[i] < prev) // still a[i] is less than prev
        {
            cout << "NO" << nl; return;
        }
        prev = a[i];
    }
    cout << "YES" << nl;
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