#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(all(a));

    vector<ll> pref(n);
    pref[0] = a[0].first;
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i].first;
    }
    
    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        int cnt = a[i].second;
        ll curr_score = pref[a[i].second];x
    }
    
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