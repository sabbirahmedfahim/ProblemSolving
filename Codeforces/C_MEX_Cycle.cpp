// resolved from the editorial
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x, y; cin >> n >> x >> y;
    x--, y--; // 0-based

    vector<int> ans(n);
    for (int i = 0; i < n; i++) ans[(x+i)%n] = i%2; // zero or one

    if(n&1 || ((x-y)%2 == 0)) ans[x] = 2;
    
    print(ans);
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