#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, x; cin >> n >> x;
    vector<ll> a(n), b(n);
    for(auto &data : a) cin >> data; for(auto &data : b) cin >> data;

    vector<ll> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i] * b[i];
    }
    // print(ans);
    sort(ans.rbegin(), ans.rend());
    ll target = 0; int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        target += ans[i];
        cnt++;
        if(target >= x) break;
    }
    if(target < x) cout << -1 << nl;
    else cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}