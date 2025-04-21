// Resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> a(n);
    int odd = 0;
    ll mx_odd = 0, mx_even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] & 1) odd++;
    }
    
    if(odd == 0 || odd == n)
    {
        cout << *max_element(all(a)) << nl; return;
    }

    // print(a);
    // surely min 1 odd, 1 even exist

    odd--;
    ll sum = accumulate(all(a), 0ll);
    sum -= odd;

    cout << sum << nl;
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