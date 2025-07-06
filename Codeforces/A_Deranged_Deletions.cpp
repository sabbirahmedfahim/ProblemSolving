#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    vector<int> b = a;
    sort(all(b));

    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != b[i]) res.push_back(a[i]);
    }
    
    if(res.empty()) cout << "No" << nl;
    else
    {
        cout << "Yes" << nl;
        cout << res.size() << nl;
        print(res);
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