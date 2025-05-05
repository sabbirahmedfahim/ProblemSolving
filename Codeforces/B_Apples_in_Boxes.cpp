#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{   
    ll n,k; cin>> n >> k;
    vector<ll> a(n); for(auto &e : a) cin >> e;
    sort(all(a));

    ll mx = *max_element(all(a));
    ll mn = *min_element(all(a));
    if(a[n-2] != a[n-1]) mx--;
    ll diff = mx - mn;

    // cout << diff << nl;
    if(diff > k) 
    {
        cout << "Jerry" << nl; return;
    }
    
    ll sum = accumulate(all(a), 0ll);
    if(sum & 1) cout << "Tom" << nl;
    else cout << "Jerry" << nl;
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