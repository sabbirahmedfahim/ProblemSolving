#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; n-=2;
    vector<int> v(n); for(auto &e : v) cin >> e;
    for (int i = 1; i < n-1; i++)
    {
        if(v[i-1] == 1 && v[i] == 0 && v[i+1] == 1)
        {
            cout << "NO" << nl; return;
        } 
    }
    cout << "YES" << nl;
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