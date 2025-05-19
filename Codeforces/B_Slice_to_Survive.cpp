#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    ll r, c, a, b; cin >> r >> c >> a >> b;
    
    ll cntRow__1, cntCol__1;
    ll cntRow__2, cntCol__2;
    cntCol__1 = min(b, c - b + 1);
    cntRow__1 = r;

    cntRow__2 = min(a, r - a + 1);
    cntCol__2 = c;

    // cout << cntRow << " " << cntCol << nl;
    int cnt1 = 1, cnt2 = 1;
    // cout << (int) ceil (log2(cntRow)) << " " << (int) ceil(log2(cntCol)) << nl;

    cnt1 +=  (int) ceil (log2(cntRow__1));
    cnt1 += (int) ceil(log2(cntCol__1));

    cnt2 +=  (int) ceil (log2(cntRow__2));
    cnt2 += (int) ceil(log2(cntCol__2));
    
    cout << min(cnt1, cnt2) << nl;
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