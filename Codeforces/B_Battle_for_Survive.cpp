#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define all(v) v.begin(),v.end()
#define print(v) for(auto data : v) cout << data << " "; cout << nl
using namespace std;
void solve()
{
    int n; cin >> n; vector<ll> v(n); for(auto &data : v) cin >> data;
    sort(all(v));

    ll sum = accumulate(all(v), 0);
    for (int i = 0; i < n/2+1; i++)
    {
        sum -= v[i];
    }
    cout << sum << nl;
    
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}