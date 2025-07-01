#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, j, k; cin >> n >> j >> k; j--;

    vector<int> a(n);
    for(auto &e : a) cin >> e;
    
    int mx = *max_element(all(a));
    int player = a[j];

    if(k == 1)
    {
        if(mx == player) cout << "YES" <<nl;
        else cout << "NO" << nl;
    }
    else cout << "YES" << nl;
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