// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n); for(auto &e : a) cin >> e;

    if(k > 1)
    {
        sort(all(a)); reverse(all(a));
        ll sum = accumulate(a.begin(), a.begin() + k + 1, 0ll);
        cout << sum << nl;
    }
    else
    {
        ll x = *max_element(a.begin(), a.end()-1);
        ll y = *max_element(a.begin()+1, a.end());
        cout << max(x+a.back(), y+a[0]) << nl;
    }
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