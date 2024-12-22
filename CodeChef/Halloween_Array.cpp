#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    ll n, l, r; cin >> n >> l >> r;
    vector<ll> v(n); for(auto &data : v) cin >> data;
    ll bit_product = 1;
    for (int i = 0; i < n; i++)
    {
        bit_product ^= v[i];
    }
    // cout << bit_product << nl;
    if(bit_product >= l && bit_product <= r) cout << "YES" << nl;
    else cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}