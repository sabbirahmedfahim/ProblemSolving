#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define nl '\n'
using namespace std;
void solve()
{
    ll n, q; cin >> n >> q;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<ll> prefixSum(n);
    vector<ll> suffixSum(n);
    prefixSum[0] = v[0];
    suffixSum[n-1] = v[n-1];
    for (int i = 1; i < n; i++) prefixSum[i] = prefixSum[i-1] + v[i];
    for (int i = n-2; i >= 0; i--) suffixSum[i] = suffixSum[i+1] + v[i];
    
    while (q--)
    {
        ll l, r, k; cin >> l >> r >> k;
        ll sum = 0;
        ll cnt = (r-l)+1;
        sum = sum + (k*cnt);
        l--, r--;
        if(l != 0) 
        {
            sum += prefixSum[l-1];
        }
        if(r != n-1) 
        {
            sum += suffixSum[r+1];
        }
        if(sum % 2 == 1) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}
int main()
{
    int t; cin >> t;
    while(t--) solve();

    return 0;
}