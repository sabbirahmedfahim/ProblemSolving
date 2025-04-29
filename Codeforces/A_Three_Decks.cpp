#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    vector<ll> a(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    
    ll sum = accumulate(all(a), 0ll);
    if(sum%3 == 0 && a[0] <= sum/3 && a[1] <= sum/3) cout << "YES" << nl;
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