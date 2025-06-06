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

    sort(all(a));
    if(a[0] == a.back())
    {
        cout << -1 << nl; return;
    }

    vector<int> x, y;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == a.back())
        {
            idx = i; break;
        }
        x.push_back(a[i]);
    }
    for (int i = idx; i < n; i++) y.push_back(a[i]);

    cout << x.size() << ' ' << y.size() << nl;
    print(x);
    print(y);
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