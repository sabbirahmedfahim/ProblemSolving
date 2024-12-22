#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; 
    vector<ll> v(n); for(auto &data : v) cin >> data;
    vector<ll> prefSum(n); prefSum[0] = v[0];
    for (int i = 1; i < n; i++) prefSum[i] = prefSum[i-1] + v[i];

    ll mx = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, v[i]); 
        if(prefSum[i] - mx == mx) cnt++;
    }
    cout << cnt << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}