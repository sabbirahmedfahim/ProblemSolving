#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> a(n); 
    for(auto &e : a) cin >> e;

    if(n == 1)
    {
        cout << a[0] << nl; return;
    }

    for (int i = 0; i < n-2; i+=2)
    {
        ll data = max(a[i]+1, a[i+1]);
        data = max(data, a[i+2]+1);
        a[i+2] = data;
    }
    
    ll x = *max_element(all(a));
    cout << x << nl;
    // print(a);
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