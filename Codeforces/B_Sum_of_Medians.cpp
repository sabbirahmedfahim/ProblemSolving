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
    vector<int> v(n*k); for(auto &c : v) cin >> c;
    sort(all(v));

    ll sum = 0, half = n/2;
    for (ll i = (n*k-half)-1ll; i >= 0 && k--; i-=(half+1)) sum += v[i];
    cout << sum << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    for (int i = 0; i < t; i++)
    {
        // cout << "TEST CASE-" << i << nl;
        solve();
    }
    
    return 0;
}