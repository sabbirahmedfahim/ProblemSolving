#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
#define iOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve()
{
    int n; cin >> n;
    vector<ll> v(n);
    for(auto &data : v) cin >> data;
    sort(all(v));
    // print(v);

    ll mn = 1e9;
    mn = min(mn, v[n-1] - v[2]);
    mn = min(mn, v[n-2] - v[1]);
    mn = min(mn, v[n-3] - v[0]);
    
    cout << mn << nl;
}
int main()
{
    iOS

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}