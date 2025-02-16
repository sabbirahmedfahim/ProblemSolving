// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for(auto &e : a) cin >> e;
    for(auto &e : b) cin >> e;
    // print(a); print(b);

    map<int, int> ma, mb;
    for(auto e : b) mb[e]++; // second array mapping
    int ans = 0, cur_good = 0;

    for (int i = 0; i < m; i++)
    {
        ma[a[i]]++;
        if(ma[a[i]] <= mb[a[i]]) cur_good++;
    }

    if(cur_good >= k) ans++;

    for (int i = 1, j = m; j < n; i++, j++)
    {
        ma[a[i-1]]--;
        if(ma[a[i-1]] < mb[a[i-1]]) cur_good--;

        ma[a[j]]++;
        if(ma[a[j]] <= mb[a[j]]) cur_good++;

        if(cur_good >= k) ans++;
    }
    cout << ans << nl;
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