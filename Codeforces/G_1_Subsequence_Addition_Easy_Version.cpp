// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    sort(all(a));
    if(a[0] != 1)
    {
        cout << "NO" << nl; return;
    }

    // trick bro, trick

    int sum = 1;
    for (int i = 1; i < n; i++)
    {
        if(sum < a[i])
        {
            cout << "NO" << nl; return;
        }

        sum += a[i];
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