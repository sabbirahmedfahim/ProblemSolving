#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; string x, y; cin >> n >> x >> y;

    int one_zero = 0, zero_one = 0;
    for (int i = 0; i < n; i++)
    {
        if(x[i] == y[i]) continue;
        else if(x[i] == '1') one_zero++;
        else zero_one++;
    }
    
    int mn = min(one_zero, zero_one);
    cout << mn + (max(one_zero, zero_one) - mn) << nl;
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