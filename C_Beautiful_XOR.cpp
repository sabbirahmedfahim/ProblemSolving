#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int a, b; cin >> a >> b;

    if(__lg(a) < __lg(b))
    {
        cout << -1 << nl; return;
    }

    vector<int> res;

    for (int i = 0; i < 30; i++)
    {
        if(((a >> i) & 1) != ((b >> i) & 1)) res.push_back(1 << i);
    }
    
    if(res.empty()) cout << 0 << nl;
    else 
    {
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