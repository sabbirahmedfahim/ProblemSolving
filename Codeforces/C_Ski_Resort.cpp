#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k, q; cin >> n >> k >> q;
    vector<int> a(n); for(auto &e : a) cin >> e;

    ll res = 0;
    for (int i = 0; i < n; )
    {
        int j = i;
        ll cur = 1, cnt = -1;
        while (i < n && a[i] <= q)
        {
            if(i - j + 1 == k) cur++, cnt = 1;
            if(i - j + 1 > k) cnt += cur++;
            i++;
        }

        if(cnt != -1) res += cnt;
        if(i < n && a[i] == a[j]) i++; 
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