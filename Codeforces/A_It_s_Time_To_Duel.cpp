#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n); for(auto &e : a) cin >> e;

    int one = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i] == 0 && a[i + 1] == 0)
        {
            cout << "YES" << nl; return;
        }

        if(a[i] == 1) one++;
    }

    if(a[n-1] == 1) one++;
    
    if(one == n)
    {
        cout << "YES" << nl; return;
    }
    cout << "NO" << nl;
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