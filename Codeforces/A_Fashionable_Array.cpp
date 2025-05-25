#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<int> a(n); for(auto &e : a) cin >> e;
    sort(all(a));
    // print(a);

    if((a[0]+a.back())%2 == 0)
    {
        cout << 0 << nl; return;
    }

    // sure sum is odd
    int l = (a[0] & 1), r = (a.back() & 1);

    int cntL = 1, cntR = 1;
    for (int i = 1; i < n; i++)
    {
        if((a[i] & 1) == l)
        {
            cntL++;
        }
        else break;
    }
    for (int i = n-2; i >= 0; i--)
    {
        if((a[i] & 1) == r)
        {
            cntR++;
        }
        else break;
    }
    
    cout << min(cntL, cntR) << nl;
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