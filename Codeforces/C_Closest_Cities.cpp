#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<ll> pref(n + 1), suff(n + 1);
    pref[1] = 0, pref[2] = 1;

    for (int i = 2; i < n; i++)
    {
        if((a[i] - a[i - 1]) > (a[i + 1] - a[i])) pref[i + 1] = pref[i - 1 + 1] + 1;
        else pref[i + 1] = pref[i - 1 + 1] + a[i + 1] - a[i];
    }
    if(n > 2)
    {
        if((a[n - 1] - a[n - 2]) < (a[n] - a[n - 1])) pref[n] = pref[n - 1] + a[n] - a[n - 1];
        else pref[n] = pref[n - 1] + 1;
    }
    
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << pref[i] << " ";
    // }
    suff[n] = 0, suff[n - 1] = 1;
    for (int i = n - 1; i >= 1; i--)
    {
        if((a[i] - a[i - 1]) < (a[i + 1] - a[i])) suff[i - 1] = suff[i] + 1;
        else suff[i - 1] = suff[i] + a[i] - a[i - 1];
    }
    
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << suff[i] << " ";
    // }

    int queries; cin >> queries;
    while (queries--)
    {
        int x, y; cin >> x >> y;
        if(x == y) cout << 0 << nl;
        else if(x < y) cout << pref[y] - pref[x] << nl;
        else cout << suff[y] - suff[x] << nl;
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