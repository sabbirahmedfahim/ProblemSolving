// unsolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    set<int> s;
    int cnt = 0;
    while (n--)
    {
        int u, v; cin >> u >> v;
        if(!s.count(u) || !s.count(v)) cnt++;
        s.insert(u); s.insert(v);
    }
    
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        cout << "Case " << tt << ": ";
        // cout << "TEST CASE-" << tt << nl;
        solve();
    }

    return 0;
}