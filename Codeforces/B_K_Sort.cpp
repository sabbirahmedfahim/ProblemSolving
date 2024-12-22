// resolved
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
    ll k = 0, mxDiff = 0;
    for (int i = 1; i < n; i++)
    {
        // cout << v[i-1] << " " << v[i] << nl;
        if(v[i-1] > v[i]) 
        {
            k += (v[i-1]-v[i]);
            mxDiff = max(mxDiff, v[i-1] - v[i]); // do not understand the portion, why mxDiff instead of k+1?
            v[i] = v[i-1];
        }
    }
    cout << ((k == 0)? 0 : k+mxDiff) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin >> t; 
    while (t--) solve();

    return 0;
}