#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    sort(all(a));

    int good = 0, curr = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if(a[i + 1] - a[i] <= k) 
        {
            curr++;
            good = max(good, curr + 1);
        }
        else 
        {
            if(curr) good = max(good, curr + 1);
            curr = 0;
        }
    }

    cout << min(n - good, n - 1) << nl;
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