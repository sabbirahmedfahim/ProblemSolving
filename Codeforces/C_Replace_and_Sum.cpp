#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, q; cin >> n >> q;
    vector<int> a(n), b(n);
    for(auto &e : a) cin>>e;
    for(auto &e : b) cin>>e;

    for (int i = n - 1; i >= 0; i--)
    {
        a[i] = max(a[i], b[i]);
    }
    
    int currMx = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if(i != n - 1) currMx = max(currMx, max(a[i], a[i + 1]));
        else currMx = max(currMx, a[i]);

        a[i] = currMx;
    }
    
    
    // print(a);

    vector<int> prefSum(n);
    prefSum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefSum[i] = prefSum[i - 1] + a[i];
    }

    while(q--)
    {
        int l, r; cin >> l >> r;
        l--, r--;

        if(l == 0) cout << prefSum[r] << " ";
        else cout << prefSum[r] - prefSum[l - 1] << " ";
    }
    cout << nl;
}
int_fast32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        solve();
    }

    return 0;
}