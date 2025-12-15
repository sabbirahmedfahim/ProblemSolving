// Resolved from YT
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    k--;

    if(n % 2 == 0)
    {
        cout << (k % n) + 1 << nl;
        return;
    }
    // cout << "Have Answer" << nl; 

    int gaps = k / (n / 2);
    cout << ((k + gaps) % n) + 1 << nl;
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