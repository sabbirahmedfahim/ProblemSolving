#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, q; cin >> n >> q;
    vector<int> a(n); for(auto &e : a) cin >> e;
    int cur = *max_element(all(a));

    while (q--)
    {
        char c; int l, r; cin >> c >> l >> r;
        if(c == '+')
        {
            if(cur >= l && cur <= r) cur++;
            cout << cur << " ";
        }
        else 
        {   
            if(cur >= l && cur <= r) cur--;
            cout << cur << " ";
        }
    }
    cout << nl;
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