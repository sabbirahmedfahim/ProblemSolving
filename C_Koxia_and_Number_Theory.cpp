#include <bits/stdc++.h>
#define nl '\n'
#define int long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool ok(vector<int> & a)
{
    for (int i = 0; i < (int)a.size(); i++)
    {
        for (int j = 0; j < (int)a.size(); j++)
        {
            if(i == j) continue;

            if(__gcd(a[i], a[j]) > 1) return false;
        }
    }
    
    return true;
}
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    for (int k = 1; k <= 100000; k++)
    {
        for(auto &e : a) e++;

        if(ok(a))
        {
            cout << "YES" << nl; return;
        }
    }
    
    cout << "NO" << nl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}