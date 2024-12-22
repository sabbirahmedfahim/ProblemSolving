#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    // sort(v.rbegin(), v.rend());
    sort(all(v));
    ll cost = 0, reduceVal = 0;
    for (int i = 0; i < n; i++)
    {
        cost += max(1LL * 0, v[i] - reduceVal);
        reduceVal++;
    }
    cout << cost << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}