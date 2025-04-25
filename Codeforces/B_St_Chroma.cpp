#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, mx_color; cin >> n >> mx_color;

    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if(i == mx_color) continue;
        else res.push_back(i);
    }
    if(mx_color < n) res.push_back(mx_color);

    print(res);
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