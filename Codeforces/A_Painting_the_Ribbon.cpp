#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m, k; cin >> n >> m >> k;

    vector<int> a(n);
    int cur = 1;
    for (int i = 0; i < n; i++)
    {
        a[i] = cur++;
        if(cur > m) cur = 1;
    }
    sort(all(a)); reverse(all(a));
    // print(a);

    for (int i = 0; i < k; i++)
    {
        a[i] = a[n-1];
    }
    
    sort(all(a));
    if(a[0] == a[n-1]) cout << "NO" << nl;
    else cout << "YES" << nl;
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