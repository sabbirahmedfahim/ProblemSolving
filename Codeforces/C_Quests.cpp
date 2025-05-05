#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n + 1), b(n + 1); 
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    
    vector<int> prefSum(n + 1), prefMx(n + 1);
    prefSum[1] = a[1], prefMx[1] = b[1];

    for (int i = 2; i <= n; i++)
    {
        prefSum[i] += prefSum[i - 1] + a[i];
        prefMx[i] = max(b[i], prefMx[i - 1]);
    }
    // print(prefSum);
    // print(prefMx);

    ll res = -1;

    for (int i = 1; i <= n; i++)
    {
        ll mx = 0;
        if(k > i) mx = prefMx[i] * (k - i);

        if(k < i) break;
        res = max(res, prefSum[i] + mx);
    }
    
    cout << res << nl;
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