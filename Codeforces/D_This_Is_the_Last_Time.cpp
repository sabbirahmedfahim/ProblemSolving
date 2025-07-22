#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
bool cmp(tuple<int, int, int> x, tuple<int, int, int> y)
{
    return get<2> (x) < get<2> (y);
}
void solve()
{
    int n, k; cin >> n >> k;
    vector<tuple<int, int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int l, r, real; cin >> l >> r >> real;
        a[i] = {l, r, real};
    }
    
    sort(all(a), cmp);

    int curr = k;
    for (int i = 0; i < n; i++)
    {
        auto [l, r, real] = a[i];
        if(curr >= l && curr <= r) curr = max(curr, real);
    }

    cout << curr << nl;
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