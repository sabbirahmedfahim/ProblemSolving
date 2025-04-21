#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, x; cin >> n >> x;

    vector<int> a(n); for(auto &e : a) cin >> e;
    sort(all(a)); reverse(all(a));

    int cnt = 0, cur_mn = INT_MAX, res = 0;
    for (int i = 0; i < n; i++)
    {
        cur_mn = min(cur_mn, a[i]);
        cnt++;
        // cout << cur_mn << " - " << cnt << nl;

        if(cnt * cur_mn >= x) 
        {
            res++;
            cnt = 0, cur_mn = INT_MAX;
        }
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