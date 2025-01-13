// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, k; cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    vector<ll> b(n); 
    for(auto &data : b) cin >> data;
    sort(all(a)); sort(all(b));

    // for(auto data : a) cout << data.first << " " << data.second << nl;

    vector<ll> ans(n);
    for (int i = 0; i < n; i++) ans[a[i].second] = b[i];

    print(ans);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}