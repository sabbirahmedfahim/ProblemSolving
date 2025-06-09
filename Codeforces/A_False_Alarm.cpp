#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    
    // print(a);

    int l = -1, r = -1;

    for (int i = 1; i <= n; i++)
    {
        if(a[i] == 1 && l == -1)
        {
            l = i, r = i;
        }
        else if(a[i] == 1) r = i;
    }

    // cout << r-l + 1 << nl;
    if(l == -1 || r-l+1 <= k) cout << "YES" << nl;
    else cout << "NO" << nl;
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