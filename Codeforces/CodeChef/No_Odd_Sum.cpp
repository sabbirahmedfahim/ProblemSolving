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
    for(auto &e : a) cin >>e;

    int one = 0, two = 0;
    for(auto e : a)
    {
        if(e == 2) two++;
        else one++;
    }

    // shob 1 korbo
    int res = 1E9;
    if(two) res = two;

    if(one & 1)
    {
        cout << two << nl; return;
    }

    if(one%2 == 0)
    {
        res = min(res, one/2);
    }

    if(one == n || one == 0) res = 0;

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