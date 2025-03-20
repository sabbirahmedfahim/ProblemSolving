// resolved from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n); for(auto &e : a) cin >> e;

    vector<int> b;

    int cur_mx = a[0];
    for (int i = 1; i < n; i++)
    {
        if(cur_mx > a[i])
        {
            b.push_back(cur_mx - a[i]);
        }

        cur_mx = max(cur_mx, a[i]);
    }
    
    if(b.empty())
    {
        cout << 0 << nl; return;
    }

    ll mx = *max_element(all(b));
    ll sum = accumulate(all(b), 0ll);

    cout << mx + sum << nl;
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