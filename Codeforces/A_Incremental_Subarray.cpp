#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m; cin >> n >> m;
    vector<int> a(m);
    for(auto &e : a) cin >> e;

    for (int i = 1; i < m; i++)
    {
        if(a[i] == 1)
        {
            cout << 1 << nl; return;
        }
    }

    cout << n - a.back() + 1 << nl;
    
    // cout << "have answer" << nl;
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