// resolved
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> v(n); for(auto &c : v) cin >> c;

    vector<ll> pref(n); pref.front() = v.front();
    for (int i = 1; i < n; i++) pref[i] = pref[i-1] + v[i];
    
    ll GCD = 0, sum = accumulate(all(v), 1LL * 0);
    for (int i = 0; i < n-1; i++) // think why n-1 instead of n
    {
        GCD = max(GCD, __gcd(pref[i], sum - pref[i]));
        // cout << __gcd(pref[i], sum) << " ";
    }
    cout << GCD << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}