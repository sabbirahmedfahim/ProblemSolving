#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> v(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; mp[v[i]]++;
    }
    ll mx_freq = 0;
    for(auto [key, val] : mp) mx_freq = max(mx_freq, val);
    // cout << mx_freq << nl;
    int op = 0;
    while (mx_freq < n) 
    {
        int remaining_ele = min(n - mx_freq, mx_freq);
        op++;
        op += remaining_ele;
        mx_freq += remaining_ele;
    }
    cout << op << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}