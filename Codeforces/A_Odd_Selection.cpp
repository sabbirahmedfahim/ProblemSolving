#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for(auto &e : a) cin >> e;

    int odd = 0, even = 0;
    for(auto e : a)
    {
        if(e & 1) odd++;
        else even++;
    }
    
    if(odd && odd%2 == 0) odd--;
    int mxTake = odd + even;

    if(odd && mxTake >= x && (x & 1)) cout << "Yes" << nl;
    else if(odd && even && mxTake >= x) cout << "Yes" << nl;
    else cout << "No" << nl;
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