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
    for(auto &e : a) cin >> e;
    sort(all(a));

    int res = -1E9;
    for (int i = a[0]; i <= a[n-1]; i++)
    {
        int x = i;
        int curr_sum = 0;
        for (int j = 0; j < n; j++)
        {
            int cost = x * 30, revenue = min(a[j], x) * 50;
            curr_sum += revenue - cost;
        }
        
        res = max(res, curr_sum);
    }
    
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