#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    sort(a, a+3); // not sure, if i were alice, i would delete max freq.

    if((a[0] & 1) && (a[1] & 1))
    {
        a[0]--;
    }
    cout << a[0] + a[1] << nl;
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