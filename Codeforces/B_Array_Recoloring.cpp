// resolved (there is a simple observation)
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(c) c.begin(),c.end()
#define print(c) for(auto e : c) cout << e << " "; cout << nl
using namespace std;
void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n); for(auto &e : a) cin >> e;

    if(k == 1) // edge case
    {
        ll ans1 = a[0], ans2 = a[n-1];
        ans1 += *max_element(a.begin() + 1, a.end());
        ans2 += *max_element(a.begin(), a.begin() + n - 1);
        cout << max(ans1, ans2) << nl;
        return;
    }

    sort(all(a)); reverse(all(a));
    ll sum = 0;
    for (int i = 0; i < k+1; i++)
    {
        sum += a[i];
    }
    
    cout << sum << nl;
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