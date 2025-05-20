#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
int cnt(vector<int> &a, int v, int x)
{
    int cur = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(abs(v-a[i]) > x) cur++;
    }
    
    return cur;
}
void solve()
{
    int n, x; cin >> n >> x;
    vector<int> a(n); for(auto &e : a) cin >> e;

    int hi = 1E9, lo = 0, res = 1E9;

    while (lo <= hi)
    {
        int mid = lo + (hi-lo)/2;

        if(cnt(a, mid, x) < res)
        {
            res = cnt(a, mid, x);
            hi = mid - 1;
        }
        else lo = mid + 1;
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